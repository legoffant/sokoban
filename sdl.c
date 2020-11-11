#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(void) {
    SDL_Init(SDL_INIT_VIDEO); // Démarrage de la SDL chargement systeme video

    /*
    La SDL est chargée.
    Contenu du programme
    */
   SDL_Quit(); // Arrêt SDL (libréation de la mémoire)

   return EXIT_SUCCESS;
}