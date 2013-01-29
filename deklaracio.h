#ifndef DEKLARACIO_H_BEILLESZTVE
#define DEKLARACIO_H_BEILLESZTVE

#include <SDL.h>
#include <SDL_ttf.h>


//MENU FUGGVENYEK DEKLARALASA
int menu(SDL_Event event, SDL_Surface *screen);
Menupont fomenu (SDL_Event event, SDL_Surface* screen);
Menupont beallitasok(SDL_Event event, SDL_Surface* screen);
Menupont leiras(SDL_Event event, SDL_Surface*screen);

//JATEK FUGGVENYEK DEKLARALASA
//Uint32 idozit(Uint32 ms, void* param);
void jatek(void);

#endif
