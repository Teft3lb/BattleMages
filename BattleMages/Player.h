#pragma once
#include "includes.h"
class Player
{
	void control();

	sf::Vector2f m_Position;

	sf::Sprite m_Sprite;

	sf::Texture m_Texture;

	float m_Speed;

public:

	Player();

	sf::Sprite getSprite();

	void update(float elapsedTime);


};

