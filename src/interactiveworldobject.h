#pragma once

#include <SDL2/SDL.h>
#include <vector>
#include <string>

#include "util/point.h"
#include "worldobject.h"
#include "gui/wholescreengui.h"
#include "character.h"
#include "gui/interactivegui.h"

/*!
 * @author kovlev
 */


/*!
 * @class InteractiveWorldObject a world objects that has tiles, which trigger some kind of events
 * Has properties like owner or name
 */
class InteractiveWorldObject : public WorldObject {
public:
	InteractiveWorldObject(std::string text, int x, int y, std::vector<Point> intTiles, bool isNeut);
	InteractiveWorldObject(std::string text, Point pos, std::vector<Point> intTiles, bool isNeut);
	~InteractiveWorldObject();
	
	//Getters
	std::vector<Point> getInteractiveTiles();
	bool isNeutral();
	std::string getName();
	Character* getOwner();
	InteractiveGUI* getGUI();
	
	//Setters
	void setName(std::string newName);
	void setOwner(Character* newOwner);
	
	//Activates the current IWO
	void activate();
	
	//NOTE temporary variable
	std::string tempOwnerHolder;
protected:
	//Impassable tiles are relative; (0, 0) means the positionTile
	std::vector<Point> interactiveTiles;
	
	//Is the worldobject neutral, or it has an owner?
	bool neutral;
	
	std::string name;
	
	Character* owner;
	
	InteractiveGUI* gui;
};
