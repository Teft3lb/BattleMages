#pragma once
#include "includes.h"
class Entity
{
	float x, y, dx, dy;
	float speed;
	int w, h;
	int health;
	bool isLife, isMove;

	sf::Texture texture;
	sf::Sprite sprite;
	sf::String name;

public:
	/// <summary>
	/// 1: ����������� �������,
	/// 2: ���������� ���������
	/// 3: ���������� ������� �������
	/// 4: ��� �������
	/// </summary>
	Entity(sf::Image& image, float X, float Y, int W, int H, sf::String Name)
	{
		x = X;
		y = Y;
		h = H;
		name = Name;
		speed = 0; 
		health = 0;

		dx = 0;
		dy = 0;

	}
};

