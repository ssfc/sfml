//
// Created by take_ on 24-5-25.
//

#include <SFML/Graphics.hpp>
#include <vector>

int main() {
    // 创建一个窗口
    sf::RenderWindow window(sf::VideoMode(800, 600), "Object Movement Visualization");

    // 设置初始位置和路径
    std::vector<sf::Vector2f> positions = {
            {100, 300}, {200, 300}, {300, 300}, {400, 300}, {500, 300}, {600, 300}, {700, 300}
    };

    // 创建一个形状来表示物体（一个圆形）
    sf::CircleShape object(10);  // 半径为10的圆
    object.setFillColor(sf::Color::Red);

    size_t index = 0;

    // 游戏循环
    while (window.isOpen()) {
        // 处理事件
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 更新物体位置
        if (index < positions.size()) {
            object.setPosition(positions[index]);
            index++;
        }

        // 清除窗口
        window.clear(sf::Color::Black);

        // 绘制物体
        window.draw(object);

        // 显示内容
        window.display();

        // 控制帧率
        sf::sleep(sf::seconds(1));  // 每秒更新一次位置
    }

    return 0;
}
