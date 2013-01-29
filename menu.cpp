#include "deklaracio.h"

int menu(void){
    SDL_Event event;
    SDL_Surface *screen;
    
    int quit=0;

    /* Menu megjelenitese, illetve a kattintasok vizsgalata.
     * Szerintem ugy lenne a jo, ha a fuggvenyek minel kevesebb
     * parameterrel rendelkeznenek, mert azoknak a kiertekelese
     * plusz teljesitmeny.*/

    SDL_Init (SDL_INIT_VIDEO);
    SDL_WM_SetCaption("Hoki","Hoki");
    screen=SDL_SetVideoMode (500, 250, 0, SDL_ANYFORMAT);
    /*A kepernyo mereteit meg at kell gondolni*/
    
    while(!quit){
        /*Kepek megjelenitese, majd a switch-case kombo a kattintasok vizsgalatara.*/
        
        SDL_WaitEvent (&event);
        switch (event.type){
            case SDL_QUIT:
                quit=1;
                break;
            
            case SDL_MOUSEBUTTONDOWN:
                /*Parameterek megadase*/
        }
        
    }
}
