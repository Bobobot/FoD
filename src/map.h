#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <typeinfo>

#include "tile.h"
#include "point.h"
#include "worldobject.h"
#include "impassableworldobject.h"
#include "interactiveworldobject.h"
#include "player.h"
#include "npc.h"
#include "mapentity.h"

class Map {
public:
	Map(int w, int h);
	~Map();
	
	//Getters
	int getWidth();
	int getHeight();
	int getSize();
	
	Tile* getTile(int x, int y);
	Tile* getTile(Point pos);
	
	void render();
	
	//sets the passablitity of the tiles
	void createPassabilityMap();
	
	//Converts screen coordinates to tile coordinates
	Point getTileFromCursorPosition(Point cursorPosition);
	
	//Gets an NPC
	//Returns NULL, when there aren't any npcs standing on the tile
	NPC* getNPCOnTile(int x, int y);
	NPC* getNPCOnTile(Point tilePos);
	NPC* getNPCOnTile(Tile* tile);
	
	//DEBUG
	bool getAllowDebug();
	void setAllowDebug(bool newAllowDebug);
private:
	int width;
	int height;
	//Number of tiles
	int size;
	
	//This is a two-dimensional array of Tile pointers
	Tile*** tiles;
	
	//Rendering
	void renderTileMap();
	void renderMapEntities();
	void renderPath();
	
	//Loading
	//Uses file IO
	void loadTileMap();
	
	std::string tileMapPath;
	
	//Utility functions
	bool isTileVisible(int x, int y);
	bool isTileVisible(Point tPos);
	
	//DEBUG
	void renderPassabilityDebugInfo();
	bool allowDebug;
};
