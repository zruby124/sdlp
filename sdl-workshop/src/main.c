#include <SDL2/SDL.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <SDL2/SDL_image.h>
#include <time.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "functions.h"



#define SCREEN_WIDTH 1920 
#define SCREEN_HEIGHT 1080

int main(int argc, char** argv){
SDL_Window *window;
SDL_Surface * background , *png_image, *ScreenSurface;
SDL_Rect center;
int RUNNING=0;

center.w=0;
center.h=0;
center.x= SCREEN_HEIGHT/2;
center.y=SCREEN_WIDTH/2;


window= SDL_CreateWindow("workshop exemple", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT,SDL_WINDOW_FULLSCREEN_DESKTOP);
ScreenSurface=SDL_GetWindowSurface(window);

background= IMG_Load("images/street.png");
png_image=IMG_Load("images/menu.png");


while(RUNNING<=5){

SDL_BlitSurface(background,NULL,ScreenSurface,NULL);
SDL_BlitSurface(png_image,NULL,ScreenSurface,&center);



SDL_UpdateWindowSurface(window);
SDL_Delay(1000);
RUNNING++;
}



SDL_FreeSurface(png_image);
SDL_FreeSurface(background);
SDL_FreeSurface(ScreenSurface);
SDL_DestroyWindow(window);
    SDL_Quit();





    return 0;
}