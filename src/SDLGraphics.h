#pragma once

#include "Header.h"

class SDLGraphics
{
public:
	SDLGraphics(int windowWidth, int windowHeight,
                const char* windowtitle,
                int bgR, int bgG, int bgR);
	~SDLGraphics();

	SDL_Surface* loadBitmap(const char* bitmapFileName,
                            int transparentRed, int transparentGreen,
                            int transparentBlue);
    void closeBitmap(SDL_Surface* bitmap);

	void beginScene();
	void endScene();

    void drawSprite(SDL_Surface* imageSurface,
                    int srcX, int srcY,
                    int dstX, int dstY,
                    int width, int height);

    void drawText(const char* string,
                  int size,
                  int x, int y,
                  int fR, int fG, int fB,
                  int bR, int bG, int bB);

    void setBackgroundColor(int r, int g, int b);

private:
    SDL_Surface* m_screen;

    int m_backgroundColorRed;
    int m_backgroundColorGreen;
    int m_backgroundColorBlue;

};

