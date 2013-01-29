#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <sdl_gfxprimitives.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

#include "deklaracio.h"


int main(int argc, char *argv[]){

    menu();
    
    writeln ("Test message!");

    SDL_Quit();
    return 0;
}
