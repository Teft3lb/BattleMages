#include "Engine.h"

Engine::Engine()
{

	m_Window.create(sf::VideoMode(620, 620), "Battle Mages");

};



void Engine::play()
{

	sf::Clock clock;

	while (m_Window.isOpen())
	{
		sf::Event event;

		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_Window.close();
		}

		sf::Time dt = clock.restart();
		float dtAsSeconds = dt.asSeconds();

		
		input();
		collisionWithMap();
		update(dtAsSeconds);
		draw();		
	}
};

