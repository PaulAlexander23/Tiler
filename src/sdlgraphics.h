#pragma once
#include "main.h"

class SDLGraphics
{
public:
	SDLGraphics(int windowWidth, int windowHeight,
                const char* windowtitle);
	~SDLGraphics();

	void begin();
	void end();

    SDL_Rect getRect(int x, int y, int width, int height);

    void setBackgroundColour(int r, int g, int b);

    void drawTexture(SDL_Texture* texture, SDL_Rect* srcRect, SDL_Rect* dstRect);
    void drawText(const char* string, int size, int x, int y, int fR, int fG, int fB, int bR, int bG, int bB);
    
    SDL_Renderer* renderer;

private:
    SDL_Window* window;

    int backgroundColourRed;
    int backgroundColourGreen;
    int backgroundColourBlue;

};
