#include "Engine.h"


void Engine::input()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		m_Window.close();
	}
};


