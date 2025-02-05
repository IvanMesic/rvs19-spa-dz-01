#include <SFML/Graphics.hpp>
#include"Cvijet.h"
int main()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(800, 600), "My epic flower");
	window.setFramerateLimit(144);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}