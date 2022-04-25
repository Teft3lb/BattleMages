#include "Engine.h"

void Engine::collisionWithMap()
{
	//Блок с ограничением карты
	

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		player1.setPositionX();
		player1.setPositionY();
	}

	if ((player1.getPositionX() + 8) < 32)
	{
		player1.stopLeft();
		
	}
	if ((player1.getPositionY() + 8) < 32)
	{
		player1.stopUp();
		
	}
	if ((player1.getPositionX() + 8) >568 )
	{
		player1.stopRight();

	}
	if ((player1.getPositionY() + 8) > 568)
	{
		player1.stopDown();

	}
	
}