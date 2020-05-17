#pragma once
#include "common.h"

extern void blit(SDL_Texture *texture, int x, int y);
extern SDL_Texture *loadTexture(const char *filename);

extern App app;
extern Stage stage;


