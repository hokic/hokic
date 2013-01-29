#include "deklaracio.h"

int menu(void){
    SDL_Event event;
    SDL_Surface *screen;

    /* Menu megjelenitese, illetve a kattintasok vizsgalata.
     * Szerintem ugy lenne a jo, ha a fuggvenyek minel kevesebb
     * parameterrel rendelkeznenek, mert azoknak a kiertekelese
     * plusz teljesitmeny.*/

    SDL_Init (SDL_INIT_VIDEO);
    SDL_WM_SetCaption("Hoki","Hoki");
    screen=SDL_SetVideoMode (500, 250, 0, SDL_ANYFORMAT);
    /*A kepernyo mereteit meg at kell gondolni*/
}
