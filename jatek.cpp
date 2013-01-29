#include "deklaracio.h"

/*A jatek fuggvenyenek a helye.*/

/*Az idozitohoz a fuggveny*/
Uint32 idozit(Uint32 ms, void* param){
    SDL_Event ev;
    ev.type = SDL_USEREVENT;
    SDL_PushEvent(&ev);
    
    return ms;
}

/*Jatek fuggveny*/
void jatek(void){
    SDL_TimerID id;
    SDL_Event event;
    SDL_Surface *screen;
    
    int timeOfEvent = SDL_GetTicks();
    
    SDL_Init (SDL_INIT_VIDEO | SDL_INIT_TIMER);
    screen = SDL_SetVideoMod(900, 450, 0, SDL_ANYFORMAT);
    
    id = SDL_AddTimer(50, idozit, NULL);
    
    /*CIKLUS*/
  
}
