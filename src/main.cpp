#include"main.h"

int main()
{
    std::cout<<"Start of script"<<std::endl;
    
    std::cout<<"Initiate SDL."<<std::endl;    
    SDL_Init(SDL_INIT_EVERYTHING);

    std::cout<<"Create screen and renderer."<<std::endl;
    SDLGraphics screen = SDLGraphics(1024, 768, "Tiler");
    SDL_Renderer* renderer = screen.renderer;

    //std::cout<<"Create sprite."<<std::endl;
    //Sprite tile = Sprite("../data/tiles.bmp", renderer, 4, 3);

    SDL_Rect dstrect;

    dstrect.x = 10;
    dstrect.y = 10;
    dstrect.w = 20;
    dstrect.h = 20;

    bool quit = false;
    SDL_Event ev;

    std::cout<<"Start game loop."<<std::endl;
    while(!quit){
        std::cout<<"Check event queue."<<std::endl;
        while(SDL_PollEvent(&ev)){
            switch(ev.type){
            case SDL_QUIT:
                quit = true;
                break;
            }
        }

        std::cout<<"Start drawing frame."<<std::endl;
        screen.begin();

        //std::cout<<"Draw tile."<<std::endl;
        //tile.Draw(renderer, dstrect, 1);

        std::cout<<"End drawing frame."<<std::endl;
        screen.end();
    }

    std::cout<<"Destroy Renderer."<<std::endl;
    SDL_DestroyRenderer(renderer);

    std::cout<<"Quit SDL."<<std::endl;
    SDL_Quit();

    std::cout<<"End of script."<<std::endl;
}
