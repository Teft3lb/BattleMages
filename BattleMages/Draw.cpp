#include "Engine.h"



void Engine::draw()
{
	m_Window.clear(sf::Color::White);

	mapDrawing();

	m_Window.draw(player1.getSprite());

	m_Window.display();

};
