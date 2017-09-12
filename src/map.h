#pragma once

#include "main.h"
#include "sprite.h"

class map
{
public:
	map(SDL_Renderer* passed_renderer, int w, int h);
	~map();

	void Draw();

private:
	SDL_Rect rect;
    Sprite tile;
    int x;

};
