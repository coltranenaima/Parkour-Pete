#include <SFML/Graphics.hpp>
#include <Poll Event.h>

int main()
{
	sf::RenderWindow game_window(sf::VideoMode(800, 600), "Parkour Pete");
	sf::Event event;

	while (game_window.isOpen())
	{
		poll_event(game_window, event);
	}

	return 0;
}