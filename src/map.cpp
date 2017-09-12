#include "map.h"

map::map(SDL_Renderer* passed_renderer, int w, int h)
    :   tile("../data/tiles.bmp", passed_renderer, 4, 3)
{
    std::cout<<"Hello"<<std::endl;
	rect.x = 0;
	rect.y = 0;
	rect.w = w;
	rect.h = h;
    x = 0;
}


map::~map()
{

}


void map::Draw()
{
    SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;

    tile.Draw(dstrect, (x++)%12);
}
