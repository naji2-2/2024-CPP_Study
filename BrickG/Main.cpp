#include <SFML/Graphics.hpp>

int main()
{
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);   // �ʴ� �������� 60����


    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x ��ũ�� ������ ������â�� ����
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // ȭ�� �����
        window.clear(sf::Color::White);

        // �׸���
     

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}
