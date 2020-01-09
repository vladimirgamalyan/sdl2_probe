#include <iostream>
#include <SDL.h>

int main()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Window* window = SDL_CreateWindow("GAME",
		SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED, 
		640, 480, 0);

	SDL_Surface* screenSurface = screenSurface = SDL_GetWindowSurface(window);
	SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x7F, 0x3F, 0xFF));
	SDL_UpdateWindowSurface(window);

	SDL_Delay(2000);

	return 0;
}

