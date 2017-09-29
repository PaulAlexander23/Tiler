#pragma once

#include "main.h"
#include <vector>

class map
{
public:
	map(SDL_Renderer* passed_renderer, int w, int h);
	~map();

	void Draw();

private:
	SDL_Rect rect;
    int x;
    const int Rows = 10;
    const int Cols = 10;
    std::vector<std::vector<int> > tiles;
};
