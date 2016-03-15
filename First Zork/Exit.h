#include "Room.h"

class Exit{

	char name[30];
	char des[300];

	Room* origen;
	Room* destino;

	bool open;
};