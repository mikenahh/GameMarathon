/*
 * App.ino
 *
 * Created: 11/14/2017 1:51:07 PM
 * Author: Gerhard
 */ 
#include "Master.h"
#include "Slave.h"
#include "Games/Bomberman.h"

Game * games[1];

int main(void)
{
	init();
	
	Master master();
	Slave slave(0);

	games[0] = new Bomberman();
	games[0]->Load();

	/* Replace with your application code */
	while (1)
	{
	}
}
