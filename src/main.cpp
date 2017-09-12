#include"main.h"

#include "graphics.h"
#include "tile.h"
//#include "map.h"

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    bool quit = false;

    graphics screen(&quit, 1024, 768);

	
	SDL_Texture image = IMG_LoadTexture(renderer, "../data/tiles.bmp");
	if (image == NULL){
		std::cout << "Counld't Load." << std::endl;
	}

    tile

    /*Sprite tile("../data/tiles.bmp", screen.GetRenderer(), 4, 3);
    SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;*/

    //std::cout<<"Hello"<<std::endl;

    //map m(screen.GetRenderer(), 1024, 768);

    SDL_Event ev;
    int x = 0;

    while(!quit){
        while(SDL_PollEvent(&ev)){
            switch(ev.type){
            case SDL_QUIT:
                quit = true;
                break;
            }
        }

        screen.Begin();
        //m.Draw();
        screen.End();

    }

    SDL_Quit();

    return 0;
}
