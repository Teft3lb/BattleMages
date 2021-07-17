#include "Engine.h"


void Engine::input()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		m_Window.close();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))player1.moveLeft();
	else player1.stopLeft();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))player1.moveRight();
	else player1.stopRight();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))player1.moveUp();
	else player1.stopUp();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))player1.moveDown();
	else player1.stopDown();
		

};


