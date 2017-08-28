#pragma once

#include "main.h"

class graphics
{
public:
	graphics(bool* quit, int ScreenWidth, int ScreenHeight);
	~graphics();

	SDL_Renderer* GetRenderer();

	void Begin();
	void End();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;

};
