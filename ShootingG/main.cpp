#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

const int WINDOW_WHDTH = 1200;
const int WINDOW_HEIGHT = 700;

void main(void)
{
	RenderWindow window(VideoMode(WINDOW_WHDTH, WINDOW_HEIGHT), "ShootingG");

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