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
    SDL_Rect rect;

    rect.x = 0;
    rect.y = 0;

    std::string path = "../data/tiles.bmp";
	SDL_Texture* tilesTexture = NULL;

	SDL_Surface* loadedSurface = SDL_LoadBMP( path.c_str() );
	if( loadedSurface != NULL )
	{
		SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );
        tilesTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
		if( tilesTexture != NULL )
		{
			//Get image dimensions
			rect.w = loadedSurface->w;
			rect.h = loadedSurface->h;
            std::cout<<"Width: "<<rect.w<<", Height: "<<rect.h<<std::endl;
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}


    SDL_Rect dstrect;
    dstrect.x = 0;
    dstrect.y = 0;
    dstrect.w = 40;
    dstrect.h = 40;

    SDL_Rect clip;
    clip.x = 0;
    clip.y = 0;
    clip.w = 40;
    clip.h = 40;

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

        std::cout<<"Draw tile."<<std::endl;
        //tile.Draw(renderer, dstrect, 1);
        SDL_RenderCopy(renderer, tilesTexture, &clip, &dstrect);

        std::cout<<"End drawing frame."<<std::endl;
        screen.end();
    }

    std::cout<<"Destroy Texture."<<std::endl;
    SDL_DestroyTexture(tilesTexture);

    std::cout<<"Destroy Renderer."<<std::endl;
    SDL_DestroyRenderer(renderer);

    std::cout<<"Quit SDL."<<std::endl;
    SDL_Quit();

    std::cout<<"End of script."<<std::endl;
}
