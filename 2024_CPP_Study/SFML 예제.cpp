#include <SFML/Graphics.hpp>

int main()
{
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");

    // �� ��ü ����
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(100.f, 100.f);

    // �簢�� ��ü ����
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(400.f, 300.f);

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // ȭ�� �����
        window.clear();

        // ���� �׸���
        window.draw(circle);
        window.draw(rectangle);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}
