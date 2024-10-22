#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

enum App {
	WHDTH = 1200,
	HEIGHT = 700
};

void main(void)
{
	RenderWindow window(VideoMode(App::WHDTH, App::HEIGHT), "ShootingG");
	window.setFramerateLimit(60);

	RectangleShape player;
	player.setSize(Vector2f(165.f, 62.f));
	player.setFillColor(Color::Cyan);
	player.setPosition((App::WHDTH / 2) - 82.f, 600.f);

	while (window.isOpen()) {
		Event event;
		while(window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		// TODO : 제대로 이동하도록 고치기
		if (Keyboard::isKeyPressed(Keyboard::Left))
			player.move(-10,0);
		if (Keyboard::isKeyPressed(Keyboard::Right))
			player.move(10, 0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			player.move(0, -10);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			player.move(0, 10);

		window.clear();
		window.draw(player);
		window.display();

	}
}