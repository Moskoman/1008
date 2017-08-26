//GameBase.h

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>
#include "GameObject.h"
#include "GraphicManager.h"
using namespace std;

class Game{

public:

//Constructor

	Game ();

//Destructor
	~Game ();

//Run
	void Run ();

//Get Renderer
	SDL_Renderer* getRenderer ();

//Start SDL Modules
	void initializeSDLModules ();
//State
//	State& GetState ();

//Get Instance
	static Game* getInstance ();

private:

	static Game* instance;

//	State* state = NULL;

};
