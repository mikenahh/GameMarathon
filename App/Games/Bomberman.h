/* 
* Bomberman.h
*
* Created: 14-11-2017 14:05:47
* Author: Gerhard
*/
#include "Game.h"

#ifndef __BOMBERMAN_H__
#define __BOMBERMAN_H__


class Bomberman : public Game
{
//variables
public:
protected:
private:
	char **_grid;
	char _gridBlockSize;
	char _maxX;
	char _maxY;
	char _offsetX;
	char _offsetY;
	uint16_t _rock;
	uint16_t _wall;
	uint16_t _background;

//functions
public:
	Bomberman();
	virtual void Load();
	~Bomberman();
protected:
private:
	Bomberman( const Bomberman &c );
	Bomberman& operator=( const Bomberman &c );

}; //Bomberman

#endif //__BOMBERMAN_H__
