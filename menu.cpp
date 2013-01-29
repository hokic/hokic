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
            case SDL_MOUSEBUTTONDOWN:
                /*Parameterek megadasa*/
                if (event.button.button == SDL_BUTTON_LEFT)
                    if (event.button.x < 100 && event.button.y < 100) /*Tesztkattintas, de el se jut idaig, mert kidob*/
                        return 2;

                break;

            case SDL_QUIT:
                quit=1;
                break;

            default:
                return 3;
        }
    }
}

void beallitasok(void){
    /* A beallitasok nelkulozhetetlenek lesznek a jatekban. Konkretan a nehezsegi fokot lehetne allitani, 
     * illetve pl a korongok szineit, vagy akar a palya stilusat is, ez mar csak hab lenne a tortan.
     * Az egesz opciok egy txt-re epulne, amibe soronkent irnank ki szamokat. Minden sornak tudnank a jelenteset, 
     * igy a fajlban lenyegeben csak szamok szerepelnenek, igazsagertekek. Igy gondoltam a fajl felepiteset:
     * 1. sor: easy erteke
     * 2. sor: medium erteke
     * 3. sor: hard erteke
     * ...
     * Itt lenyegeben csak 0-ak es 1-ek fognak szerepelni. 0 a hamis, 1 az igaz. Ezeket a valtozokat kell majd
     * tovabb adni a jatek fuggvenynek, aminek az elejen parameter beallitas lenne. Tehat megnezne, hogy melyik
     * valtozo igaz (easy, medium, hard) es azalapjan allitana be a jatekban az ertekeket. Peldaul a gep sebesseget, 
     * reagalo idejet, celzasi pontossagat. Konkretan meg nem tudom, hogy ezek milyen modon fognak szerepet jatszani
     * a programban, de valami ilyesmivel tudjuk a jatek nehezseget allitani.
     * 
     * Nos, az lenne a jo, ha kepesek lennenk mindig tarolni az adatokat, nem csak a beallitast kovetoen. Tehat
     * ha a felhasznalo kilep, akkor is emlekezzen majd kesobb, hogy legutobb milyen beallitasokat hasznalt.
     * Vagyis a txt az, amiben mindent tarolnank. Ez felvet egy problemat. Mikor kell olvasni a txt-t?
     * Ugy gondolom, hogy az egyik legjobb megoldas az lenne, ha konkretan a main-ben olvasnank, hisz a menuben 
     * nem cel az, hogy mindig be kelljen majd allitani azt, hogy milyen beallitasokat hasznaljunk. Tehat ha a 
     * felhasznalo nem allit semmit se, akkor a regi txt-t olvassa be (ezt a mainben mar), ha pedig belep a
     * beallitasokba, akkor irasra nyitja a fajlt es ezutan azokkal az adatokkal dolgozik tovabb.
     *
     * Ilyesmire gondoltam, szerintem kivitelezheto, de ha van jobb megoldas, akkor mondjatok. */
     
     FILE *fp;
     
     fp = fopen("opciok.txt");
     
     
     fclose(fp);
    
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
