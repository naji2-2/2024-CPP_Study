#include <SFML/Graphics.hpp>

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);   // 초당 프레임을 60으로

    // 원 객체 생성
    sf::CircleShape circle(100.f);      // 반지름
    circle.setFillColor(sf::Color::Magenta);
    circle.setPosition(0.f, 0.f);       // 위치

    // 사각형 객체 생성
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));   // 가로 200, 세로 100
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(0.f, 0.f);

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        rectangle.move(0.5f, 0);
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x 마크를 누르면 윈도우창을 끈다
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 화면 지우기
        window.clear(sf::Color::White);

        // 도형 그리기
        window.draw(circle);
        window.draw(rectangle);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
