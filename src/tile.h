#pragma once

#include "main.h"

class tile
{
public:
	tile(SDL_Renderer* p_renderer, SDL_Texture p_tex, SDL_Rect p_srcrect, SDL_Rect p_dstrect);
	~tile();

	void Draw();

private:    
	SDL_Renderer* renderer;
	SDL_Texture* tex_tile;

	SDL_Rect srcrect;
    SDL_Rect dstrect;
};
