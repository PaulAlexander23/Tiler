#include"main.h"

int main()
{
    std::cout<<"Hello world!"<<std::endl;
    
    SDL_Init(SDL_INIT_EVERYTHING);

    std::cout<<"SDL initiated."<<std::endl;    

    SDLGraphics screen = SDLGraphics(1024, 768, "Tile Tiler Tiled");

    SDL_Renderer* renderer = screen.renderer;

    Sprite tile = Sprite("../src/tiles.bmp", renderer, 4, 3);
    SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;

    bool quit = false;
    SDL_Event ev;

    while(!quit){
        while(SDL_PollEvent(&ev)){
            switch(ev.type){
            case SDL_QUIT:
                quit = true;
                break;
            }
        }

        screen.begin();
        tile.Draw(renderer, dstrect, 1);
        screen.end();

    }

    SDL_Quit();

    return 0;
}
