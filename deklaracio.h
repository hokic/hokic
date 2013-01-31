#ifndef DEKLARACIO_H_BEILLESZTVE
#define DEKLARACIO_H_BEILLESZTVE

#include <SDL.h>
#include <SDL_ttf.h>

typedef enum Menupont {FOMENU, JATEK, BEALLITASOK, HIGHSCORE, LEIRAS, KILEPES} Menupont;

//DICSOSEGLISTA DEKLARACIOJA
typedef struct Lista{
    char nev[11];
    int gol;
    struct Lista *kov;
} Lista;

const int SZELESSEG = 640;
const int MAGASSAG = 480;

//MENU FUGGVENYEK DEKLARALASA 
Menupont menu(SDL_Event event, SDL_Surface *screen);
Menupont fomenu (SDL_Event event, SDL_Surface* screen);
Menupont beallitasok(SDL_Event event, SDL_Surface* screen);
Menupont leiras(SDL_Event event, SDL_Surface*screen);

//JATEK FUGGVENYEK DEKLARALASA
Uint32 idozit(Uint32 ms, void* param);
Menupont jatek(SDL_Event event, SDL_Surface* screen);

#endif
