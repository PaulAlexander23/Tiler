#pragma once
#include "main.h"

class Sprite
{
public:
    Sprite(SDL_Texture* p_texture, SDL_Rect rect, int n_x, int n_y);
    Sprite(std::string path, SDL_Renderer* renderer, int n_x, int n_y);
    ~Sprite();

    void free();
    void Draw(SDL_Renderer* renderer, SDL_Rect dstrect, int x);

    SDL_Rect sing_rect;

private:
    SDL_Texture* texture;
    SDL_Rect full_rect;
    int number_horizontal;
    int number_vertical;
};
