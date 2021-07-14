#include "Player.h"

Player::Player()
{
	m_Speed = 200;

	m_Texture.loadFromFile("Images/Player1.png");
	m_Sprite.setTexture(m_Texture);
	m_Sprite.setTextureRect(sf::IntRect(0, 0, 31, 48));
	m_Sprite.setScale(0.7, 0.7);

	m_Position.x = 200;
	m_Position.y = 300;
}

sf::Sprite Player::getSprite()
{
	return m_Sprite;
}

void Player::update(float elapsedTime)
{
	if (leftPressed)m_Position.x -= m_Speed * elapsedTime;
	if (rightPressed)m_Position.x += m_Speed * elapsedTime;
	if (upPressed)m_Position.y -= m_Speed * elapsedTime;
	if (downPressed)m_Position.y += m_Speed * elapsedTime;
	m_Sprite.setPosition(m_Position);
}
///////////////////////////////////////////////////////////////////////////////

		//Control
///////////////////////////////////////////////////////////////////////////////

void Player::moveLeft()
{
	leftPressed = true;
}
void Player::moveRight()
{
	rightPressed = true;
}
void Player::moveDown()
{
	downPressed = true;
}
void Player::moveUp()
{
	upPressed = true;
}

void Player::stopLeft()
{
	leftPressed = false;
}
void Player::stopRight()
{
	rightPressed = false;
}
void Player::stopDown()
{
	downPressed = false;
}
void Player::stopUp()
{
	upPressed = false;
}