#ifndef DEKLARACIO_H_BEILLESZTVE
#define DEKLARACIO_H_BEILLESZTVE

#include <SDL.h>
#include <SDL_ttf.h>

typedef enum Menupont {FOMENU, EGYJATEKOS, TOBBJATEKOS, LEIRAS, HIGHSCORE, KILEPES} Menupont;

//MENU FUGGVENYEK DEKLARALASA 
Menupont menu(SDL_Event event, SDL_Surface *screen);
Menupont fomenu (SDL_Event event, SDL_Surface* screen);
Menupont beallitasok(SDL_Event event, SDL_Surface* screen);
Menupont leiras(SDL_Event event, SDL_Surface*screen);

//JATEK FUGGVENYEK DEKLARALASA
Uint32 idozit(Uint32 ms, void* param);
Menupont jatek(SDL_Event event, SDL_Surface* screen);

#endif
