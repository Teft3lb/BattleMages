#include "Spell.h"

Spell::Shield()
{
	durability = 100;

	shieldTexture.loadFromFile("Images/Shield.png");
	shieldSprite.setTexture(shieldTexture);
	shieldSprite.setScale(0.8, 0, 8);

}
