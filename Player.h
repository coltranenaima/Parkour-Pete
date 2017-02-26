#pragma once
#include <SFML/Graphics.hpp>

#ifndef PLAYER_H
#define PLAYER_H

class player
{
private:
	sf::RectangleShape player_rectangle;

public:
	sf::RectangleShape create_player_one()
	{
		sf::RectangleShape player_rectangle;
		player_rectangle.setSize(sf::Vector2f(20.f, 20.f));
		player_rectangle.setFillColor(sf::Color::Blue);
		return player_rectangle;
	}
};

void move_player(sf::RectangleShape &shape_name, float &delta, float player_speed);

#endif