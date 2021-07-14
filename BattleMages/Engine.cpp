#include "Engine.h"

Engine::Engine()
{

	m_Window.create(sf::VideoMode(640, 640), "Battle Mages");

};

void Engine::update(float dtAsSeconds)
{

};



void Engine::draw()
{
	m_Window.clear(sf::Color::White);

	mapDrawing();
	
	m_Window.display();
};


void Engine::play()
{

	sf::Clock clock;
	// Объект, который, собственно, является главным окном приложения
	
	// Главный цикл приложения. Выполняется, пока открыто окно

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
		update(dtAsSeconds);
		draw();		
	}
};

