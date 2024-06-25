#include <SFML/Graphics.hpp>

int main()
{
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");
    window.setFramerateLimit(60);

    // �� ��ü ����
    sf::CircleShape circle(100.f);      // ������
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(0.f, 0.f);       // ��ġ

    // �簢�� ��ü ����
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));   // ���� 200, ���� 100
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(0.f, 0.f);

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            rectangle.move(0.5f, 0);
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
