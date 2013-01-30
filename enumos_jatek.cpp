#include "deklaracio.h"

/*A jatek fuggvenyenek a helye.*//*Az idozitohoz a fuggveny*/

Uint32 idozit(Uint32 ms, void* param)
{
    SDL_Event ev;
    ev.type = SDL_USEREVENT;
    SDL_PushEvent(&ev);
    return ms;
}

/*Jatek fuggveny*/

Menupont jatek(SDL_Event event, SDL_Surface* screen)
{
    SDL_TimerID id;

    int timeOfEvent = SDL_GetTicks();
    
    //Itt volt egy SDL_Init, de akkor a Timer is mehet a mainben inicializálásra
    SDL_FreeSurface(screen);
    screen = SDL_SetVideoMode(900, 450, 0, SDL_ANYFORMAT);
    
    id = SDL_AddTimer(50, idozit, NULL);        /*CIKLUS*/
    
    //stb...
    
    SDL_RemoveTimer(id);
    
    //return AKARMI, ahogy kijön;
}
