#pragma once
//#include "includes.h"
#include <SFML/Graphics.hpp>
class Player
{
	
	sf::Vector2f m_Position;

	sf::Sprite m_Sprite;

	sf::Texture m_Texture;

	int directionX = 0;
	int directionY = 0;

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

	float getPositionX();
	float getPositionY();

	void setPositionX();
	void setPositionY();

	int getDirectionX();
	int getDirectionY();

	void setDirectionX(int i);
	void setDirectionY(int i);
	
};

