#include <Poll Event.h>

void poll_event(sf::RenderWindow &window, sf::Event &event)
{
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}
	}
}