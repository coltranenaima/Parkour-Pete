#include <SFML/Graphics.hpp>
#include <Poll Event.h>
#include <Draw.h>

int main()
{
	sf::RenderWindow game_window(sf::VideoMode(800, 600), "Parkour Pete");
	sf::Event event;

	while (game_window.isOpen())
	{
		poll_event(game_window, event);
		draw_to_screen(game_window);
	}

	return 0;
}