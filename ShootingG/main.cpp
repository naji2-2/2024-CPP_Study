#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

void main(void)
{
	RenderWindow window(VideoMode(1200, 700), "ShootingG");

	while (window.isOpen()) {
		Event event;
		while(window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		RectangleShape player;
		player.setSize(Vector2f(165.f, 62.f));
		player.setFillColor(Color::Cyan);
		player.setPosition(520.f, 360.f);

		window.clear();
		window.draw(player);
		window.display();

	}
}