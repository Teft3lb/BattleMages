#pragma once
#include "includes.h"

class Engine
{
	sf::RenderWindow m_Window;
	sf::Sprite m_Sprite;
	sf::Texture m_Texture;
	Player player1;

public:


	Engine();

	void play();

	void update(float dtAsSeconds);

	void draw();

	void input();

	void mapDrawing();
};

