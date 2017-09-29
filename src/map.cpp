#include "map.h"

map::map(SDL_Renderer* passed_renderer, int w, int h)
{
    std::cout<<"Hello"<<std::endl;
	rect.x = 0;
	rect.y = 0;
	rect.w = w;
	rect.h = h;
    x = 0;
    tiles.resize(Rows);
    for (int i = 0; i < Rows; ++i)
    {
        tiles[i].resize(Cols);
    }


    for (int i = 0; i < Rows; ++i){
        for (int j = 0; j < Cols; ++j){
            tiles[i][j] = 0;
        }
    }
}


map::~map()
{

}


void map::Draw()
{
    /*SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;*/

    for (int i = 0; i < Rows; ++i){
        for (int j = 0; j < Cols; ++j){
            std::cout<<tiles[i][j]<<", ";
        }
        std::cout<<std::endl;
    }

}
