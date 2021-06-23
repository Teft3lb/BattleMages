#include "Player.h"

Player::Player()
{
	m_Speed = 200;

	m_Texture.loadFromFile("Images/Player1.png");
	m_Sprite.setTextureRect(sf::IntRect(0, 0, 31, 48));
	m_Sprite.setScale(0.8, 0.8);

	m_Position.x = 100;
	m_Position.y = 20;
}

sf::Sprite Player::getSprite()
{
	return m_Sprite;
}

void Player::update(float elapsedTime)
{

}