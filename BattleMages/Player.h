#pragma once
//#include "includes.h"
#include <SFML/Graphics.hpp>
class Player
{
	
	sf::Vector2f m_Position;

	sf::Sprite m_Sprite;

	sf::Texture m_Texture;

	bool leftPressed;
	bool rightPressed;
	bool upPressed;
	bool downPressed;

	float m_Speed;
	float currentFrame=0;

public:

	Player();

	sf::Sprite getSprite();

	void update(float elapsedTime);

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	void stopLeft();
	void stopRight();
	void stopUp();
	void stopDown();


};

