#include "tile.h"

tile::tile(SDL_Renderer* p_renderer, SDL_Texture p_texture, SDL_Rect p_srcrect, SDL_Rect p_dstrect);
{
	renderer = p_renderer;
    texture = p_texture;
    srcrect = P_srcrect;
    dstrect = p_dstrect;
}


tile::~tile()
{
	SDL_DestroyTexture(image);
}


void tile::Draw()
{
	SDL_RenderCopy(renderer, image,NULL,&rect);


}
