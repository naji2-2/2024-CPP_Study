#include <SFML/Graphics.hpp>

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);   // 초당 프레임을 60으로


    // 이벤트 루프 시작
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x 마크를 누르면 윈도우창을 끈다
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 화면 지우기
        window.clear(sf::Color::White);

        // 그리기
     

        // 화면 업데이트
        window.display();
    }

    return 0;
}
