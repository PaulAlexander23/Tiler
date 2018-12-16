#include "sdlgraphics.h"

SDLGraphics::SDLGraphics(int windowWidth, int windowHeight, const char* windowtitle)
{
	window = NULL;
	window = SDL_CreateWindow(windowtitle, 40, 40, windowWidth, windowHeight, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		std::cout << "Window counldn't be created" << std::endl;
	}
    else
    {
    	renderer = NULL;
	    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

        backgroundColourRed = 255;
        backgroundColourGreen = 255;
        backgroundColourBlue = 255;
    }
}

SDLGraphics::~SDLGraphics()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}

void SDLGraphics::begin()
{
    std::cout<<"Clear renderer."<<std::endl;
	SDL_RenderClear(renderer);
    std::cout<<"Set draw colour."<<std::endl;
    SDL_SetRenderDrawColor(renderer, backgroundColourRed, backgroundColourGreen, backgroundColourBlue, 255);
    std::cout<<"Draw background rectangle."<<std::endl;
    SDL_RenderDrawRect(renderer,NULL);
}

void SDLGraphics::end()
{
	SDL_RenderPresent(renderer);
}

SDL_Rect SDLGraphics::getRect(int x, int y, int width, int height)
{
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = width;
    rect.h = height;
    return rect;
}

void SDLGraphics::setBackgroundColour(int r, int g, int b)
{
    backgroundColourRed = r;
    backgroundColourGreen = g;
    backgroundColourBlue = b;
}

void SDLGraphics::drawTexture(SDL_Texture* texture, SDL_Rect* srcRect, SDL_Rect* dstRect)
{
    SDL_RenderCopy(renderer, texture, srcRect, dstRect);
}

void SDLGraphics::drawText(const char* string, int size, int x, int y, int fR, int fG, int fB, int bR, int bG, int bB)
{
    
}
