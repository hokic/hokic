#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <sdl_gfxprimitives.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

#include "deklaracio.h"


int main(int argc, char *argv[]){
    SDL_Event event;
    SDL_Surface *screen;

    menu(event, screen);

    SDL_Quit();
    return 0;
}
