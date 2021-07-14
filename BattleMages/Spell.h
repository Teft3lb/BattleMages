#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
class Spell
{
	float x;
	float y;

	bool isActive;

	int durability;

	Player playerSprite;

	sf::Sprite shieldSprite;
	sf::Texture shieldTexture;

public:
	Shield();

	void isShieldActive();
	void isShiledInactive();

	void discraseDurability();

	void incraseDurability();

};

