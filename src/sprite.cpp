#include"sprite.h"

Sprite::Sprite(SDL_Texture* p_texture, SDL_Rect p_rect, int n_x, int n_y){
    texture = p_texture;
    number_horizontal = n_x;
    number_vertical = n_y;
    full_rect = p_rect;
    sing_rect.w = int(p_rect.w/n_x);
    sing_rect.h = int(p_rect.h/n_y);
}

Sprite::Sprite(std::string path, SDL_Renderer* renderer, int n_x, int n_y){
	free();

    SDL_Rect rect;

    rect.x = 0;
    rect.y = 0;

	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = SDL_LoadBMP( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );

        newTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}
		else
		{
			//Get image dimensions
			rect.w = loadedSurface->w;
			rect.h = loadedSurface->h;
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	//Return success
    Sprite(newTexture, rect, n_x, n_y);
}

Sprite::~Sprite(){
    free();
}

void Sprite::free()
{
	if( texture != NULL )
	{
		SDL_DestroyTexture(texture);
		texture = NULL;
	}
}

void Sprite::Draw(SDL_Renderer* renderer, SDL_Rect dstrect, int x){
    SDL_Rect srcrect;
    srcrect.x = sing_rect.w * (x % number_horizontal);
    srcrect.y = sing_rect.h * ((int)x / number_horizontal);
    srcrect.w = sing_rect.w;
    srcrect.h = sing_rect.h;
    std::cout<<SDL_RenderCopy(renderer, texture, &srcrect, &dstrect)<<std::endl;
    std::cout<<SDL_GetError()<<std::endl;
}
