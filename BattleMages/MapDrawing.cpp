#include "Engine.h"

void Engine::mapDrawing()
{

	const int HEIGHT_MAP = 20;
	const int WIDTH_MAP = 20;

	sf::String tileMap[HEIGHT_MAP] =
	{
		"00000000000000000000",
		"0                  0",
		"0    b       b     0",
		"0    b             0",
		"0     b            0",
		"0                  0",
		"0                  0",
		"0          bb      0",
		"0          b       0",
		"0                  0",
		"0                  0",
		"0            b     0",
		"0    b             0",
		"0     b            0",
		"0      b           0",
		"0            b     0",
		"0            b     0",
		"0                  0",
		"0                  0",
		"00000000000000000000",
	};


	sf::Image map_image;
	map_image.loadFromFile("Images/map.png");
	if (!map_image.loadFromFile("Images/map.png"))
	{
		std::cout << "CRASH";
	}

	sf::Texture map;
	map.loadFromImage(map_image);
	sf::Sprite s_map;
	s_map.setTexture(map);

	for (int i = 0; i < HEIGHT_MAP; i++)
	{
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			if (tileMap[i][j] == ' ') s_map.setTextureRect(sf::IntRect(34, 35, 31, 31));
			if (tileMap[i][j] == '0') s_map.setTextureRect(sf::IntRect(100, 2, 31, 31));
			if (tileMap[i][j] == 'b') s_map.setTextureRect(sf::IntRect(265, 35, 31, 31));
			s_map.setPosition(j * 31, i * 31);
			m_Window.draw(s_map);
		}
	}

	for (int i = 0; i < HEIGHT_MAP; i++)
	{
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			if (tileMap[i][j] == '0')
			{
				if (player1.moveDown())
			}
		}
	}
}