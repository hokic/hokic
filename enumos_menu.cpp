#include "deklaracio.h"
#include <SDL.h>
#include <sdl_gfxprimitives.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

Menupont menu(SDL_Event event, SDL_Surface *screen)
{
    bool quit=0;    
    
    /* Menu megjelenitese, illetve a kattintasok vizsgalata.     
    * Szerintem ugy lenne a jo, ha a fuggvenyek minel kevesebb     
    * parameterrel rendelkeznenek, mert azoknak a kiertekelese     
    * plusz teljesitmeny.*/    
    
    SDL_Init (SDL_INIT_VIDEO);       
    
    /*Ha van otlet tovabbi menupontokhoz, akkor ide irjatok majd*/
    
    SDL_WM_SetCaption("Hoki","Hoki");
    screen=SDL_SetVideoMode (500, 250, 0, SDL_ANYFORMAT);    /*A kepernyo mereteit meg at kell gondolni*/        
    
    while(!quit)
    {
        /*Kepek megjelenitese, majd a switch-case kombo a kattintasok vizsgalatara.*/                
        
        boxRGBA(screen, 0, 0, 500, 250, 255, 255, 255, 255);                
        
        /* Szamomra erthetetlen modon egybol bezarodik a program, majd akinek lesz          
        * otlete... Mindenesetre a grafikai resznek is neki kell majd kezdeni         
        * hogy ne visszafele kelljen dolgoni.*/                
        
        SDL_Flip(screen);
        SDL_WaitEvent (&event);
        switch (event.type)
        {
        case SDL_MOUSEBUTTONDOWN:                /*Parameterek megadasa*/
            if (event.button.button == SDL_BUTTON_LEFT)                    
                if (event.button.x < 100 && event.button.y < 100) 
                
                /*Tesztkattintas, de el se jut idaig, mert kidob*/                        
                
                return 2;
            break; //return miatt nem kell, de majd a végleges kódból kiszedjük
        case SDL_QUIT:
            quit=1;
            break;
        default:
            return 3;
        }
    }
}
