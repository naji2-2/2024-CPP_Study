#include <SFML/Graphics.hpp>

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");
    window.setFramerateLimit(60);

    // 원 객체 생성
    sf::CircleShape circle(100.f);      // 반지름
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(0.f, 0.f);       // 위치

    // 사각형 객체 생성
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));   // 가로 200, 세로 100
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(0.f, 0.f);

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            rectangle.move(0.5f, 0);
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 화면 지우기
        window.clear();

        // 도형 그리기
        window.draw(circle);
        window.draw(rectangle);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
