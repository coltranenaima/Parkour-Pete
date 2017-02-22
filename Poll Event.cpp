#include <Poll Event.h>

void poll_event(sf::RenderWindow &window, sf::Event &event)
{
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}

		if ((event.type == event.KeyPressed) && (event.key.code == sf::Keyboard::Escape))
		{
			window.close();
		}
	}
}