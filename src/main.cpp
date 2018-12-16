#include"main.h"

int main()
{
    std::cout<<"Start of script"<<std::endl;
    
    SDL_Init(SDL_INIT_EVERYTHING);
    std::cout<<"SDL initiated."<<std::endl;    

    SDLGraphics screen = SDLGraphics(1024, 768, "Tiler");
    SDL_Renderer* renderer = screen.renderer;
    std::cout<<"Screen and renderer created."<<std::endl;

    Sprite tile = Sprite("../data/tiles.bmp", renderer, 4, 3);
    std::cout<<"Sprite created."<<std::endl;

    SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;

    bool quit = false;
    SDL_Event ev;

    std::cout<<"Start of game loop."<<std::endl;
    while(!quit){
        std::cout<<"Check event queue."<<std::endl;
        while(SDL_PollEvent(&ev)){
            switch(ev.type){
            case SDL_QUIT:
                quit = true;
                break;
            }
        }
        std::cout<<"Event queue empty."<<std::endl;

        std::cout<<"Start drawing frame."<<std::endl;
        screen.begin();
        std::cout<<"Drawing tile."<<std::endl;
        tile.Draw(renderer, dstrect, 1);
        screen.end();
        std::cout<<"End drawing frame."<<std::endl;
    }
    std::cout<<"End of game loop."<<std::endl;

    std::cout<<"Quit SDL."<<std::endl;
    SDL_Quit();

    std::cout<<"End of script."<<std::endl;
}
