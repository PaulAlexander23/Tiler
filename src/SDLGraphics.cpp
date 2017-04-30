#include "SDLGraphics.h"

SDLGraphics(int windowWidth, int windowHeight,
                const char* windowtitle,
                int bgR, int bgG, int bgR)
{

	window = NULL;
	window = SDL_CreateWindow(windowtitle, 40, 40, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		std::cout << "Window counldn't be created" << std::endl;
		*quit = true;
	}
	renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	mainEvent = new SDL_Event();
}

SDLGraphics::~SDLGraphics()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete mainEvent;
}

SDL_Renderer* SDLGraphics::GetRenderer()
{
	return renderer;
}

void SDLGraphics::Begin()
{
	SDL_PollEvent(mainEvent);
	SDL_RenderClear(renderer);
}

void SDLGraphics::End()
{
	SDL_RenderPresent(renderer);
}
