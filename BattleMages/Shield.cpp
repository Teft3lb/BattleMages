#include "Shield.h"

Shield::Shield()
{
	shieldTexture.loadFromFile("Images/Shield.png");
	shieldSprite.setTexture(shieldTexture);
	shieldSprite.setScale(0.8, 0.8);

}

void Shield::isShieldActive()
{
	bool isActive = true;
}

