#include "deklaracio.h"

#include <SDL.h>
#include <sdl_gfxprimitives.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

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
        
        boxRGBA(screen, 0, 0, 500, 250, 255, 255, 255, 255);
        
        /* Szamomra erthetetlen modon egybol bezarodik a program, majd akinek lesz 
         * otlete... Mindenesetre a grafikai resznek is neki kell majd kezdeni
         * hogy ne visszafele kelljen dolgoni.*/
        
        SDL_Flip(screen);
        
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

void beallitasok(void){
    /*Ha csinalunk opciokat, akkor annak a fuggveny*/
    
}

void dicsoseglista(void){
    /* Dicsoseglista fuggvenye. Ezt nagy valoszinuseggel itt is
     * lancolt listaval kell majd kivitelezni, abban pedig mostansag profi
     * vagyok. A jatekban merni fogjuk az idot, illetve a golok szamat. Lehetne
     * nehezsegi szinteket csinalni es akkor ezek alapjan lehetne rangsorolni.*/
    
}

void leiras(void){
    /*A jatek leirasat ebben a fuggvenyben tudjuk majd megcsinalni*/

}

/*Ha van otlet tovabbi menupontokhoz, akkor ide irjatok majd*/
