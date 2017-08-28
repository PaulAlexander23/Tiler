#include"main.h"

#include "graphics.h"
#include "sprite.h"

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    bool quit = false;

    graphics screen(&quit, 1024, 768);

    Sprite tile = Sprite("../data/tiles.bmp", screen.GetRenderer(), 4, 3);
    SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;

    SDL_Event ev;

    while(!quit){
        while(SDL_PollEvent(&ev)){
            switch(ev.type){
            case SDL_QUIT:
                quit = true;
                break;
            }
        }

        screen.Begin();
        tile.Draw(dstrect, x++);
        screen.End();

    }

    SDL_Quit();

    return 0;
}
