#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
class Shield: public Player
{
	float x;
	float y;

	bool isActive;
	bool canBeActivated;


	Player playerSprite;

	sf::Sprite shieldSprite;
	sf::Texture shieldTexture;

public:
	Shield();
	~Shield();

	void isShieldActive();
	void isShiledInactive();
	void shieldCountDown(float countDown);
};

