#include "Room.h"
#define NUM_ROOMS 13

class World{

	Room* rooms;

	World(){

		rooms = new Room[NUM_ROOMS];

	}

};