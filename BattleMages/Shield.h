#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
class Shield: public Player
{
	float x;
	float y;

	bool isActive;


	Player playerSprite;

	sf::Sprite shieldSprite;
	sf::Texture shieldTexture;

public:
	Shield();
	~Shield();

	void isShieldActive();
	void isShiledInactive();

};

