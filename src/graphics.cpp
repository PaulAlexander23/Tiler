#include "graphics.h"

graphics::graphics(bool* quit, int ScreenWidth, int ScreenHeight)
{

	window = NULL;
	window = SDL_CreateWindow("Tiler", 100, 100, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		std::cout << "Window counldn't be created" << std::endl;
		*quit = true;
	}
	renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC|SDL_RENDERER_ACCELERATED);
}


graphics::~graphics()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}

SDL_Renderer* graphics::GetRenderer()
{
	return renderer;
}

void graphics::Begin()
{
	SDL_RenderClear(renderer);
}

void graphics::End()
{
	SDL_RenderPresent(renderer);
}
