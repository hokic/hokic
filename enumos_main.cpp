#include <sdl.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    SDL_Event event;
    SDL_Surface* screen;
    Menupont menupont;
    Menupont (*menu_betolt) (SDL_Event, SDL_Surface*);  //Függvénypointer, csak a sorminta elkerülése végett

    SDL_Init(SDL_INIT_VIDEO);

    screen = SDL_SetVideoMode(SZELESSEG, MAGASSAG, 0, SDL_ANYFORMAT);

    if (!screen)
    {
        std::cout << "Ablak megnyitasa nem sikerult!\n" << endl;
        return 1;
    }

    menupont = FOMENU;  //Itt a lényeg: létrehozunk egy saját típust, amely saját típus értékeivel fognak visszatérni a függvények: ez azért jó, mert így átlátható, hogy melyik függvényből mit töltünk be, és minden egyes menüpontnak, amit külön függvényként kezelünk, megadhatunk visszatérési értéket, aminek alapján a main ciklusa a megfelelő függvényt betölti (s ezzel együtt az ott megírt menüpontot)

    while (menupont != KILEPES)
    {
        switch (menupont)
        {
        case FOMENU:
            menu_betolt = fomenu_fv;
            break;
        case EGYJATEKOS:
            menu_betolt = egyjatekos_fv;
            break;
        case TOBBJATEKOS:
            menu_betolt = tobbjatekos_fv;
            break;
        case LEIRAS:
            menu_betolt = leiras_fv;
            break;
        case HIGHSCORE:
menu_betolt = highscore_fv:
                          break;
        case KILEPES:
            menu_betolt = kilepes_fv;
            break;
        }
        menupont = menu_betolt (event, screen);
    }

    SDL_FreeSurface(screen);
    SDL_Quit();
    return 0;
}
