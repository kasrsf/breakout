#ifndef TEXTURE_H
#define TEXTURE_H

#include <SDL2/SDL.h>
#include <string>

class Texture
{
public:

	Texture();
	~Texture();

	bool load_from_file( std::string path );

	//deallocate texture
	void free();

	//Renders texture at given point
	void render( int x, int y, SDL_Rect* clip = NULL, SDL_Rect* scale = NULL );

	int get_width();
	int get_height();

private:
	//the actual texture
	SDL_Texture *texture;

	int width;
	int height;
};

#endif