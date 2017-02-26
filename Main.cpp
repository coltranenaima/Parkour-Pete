#include <SFML/Graphics.hpp>
#include <Poll Event.h>
#include <Player.h>

int main()
{
	sf::RenderWindow game_window(sf::VideoMode(800, 600), "Parkour Pete");
	player player_one;
	sf::RectangleShape player_one_rectangle = player_one.create_player_one();
	sf::Clock delta_clock;
	float delta = 0.f;

	while (game_window.isOpen())
	{
		delta = delta_clock.restart().asSeconds();
		poll_event(game_window);
		move_player(player_one_rectangle, delta, 150);

		game_window.clear();
		game_window.draw(player_one_rectangle);
		game_window.display();
	}

	return 0;
}