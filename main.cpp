#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "point.h"  

int main() {
    
    point p[MAX_POINTS];
    for(int i=0;i<MAX_POINTS;i++)
        p[i].set(i, MAX_POINTS);
    
    sf::VertexArray q(sf::Lines,2*MAX_POINTS);
    for(int i=0;i<MAX_POINTS;i+=2) {
        
        q[i].position=sf::Vector2f(p[i].x,p[i].y);
        q[i].color=sf::Color::White;
        q[i+1].position=sf::Vector2f(p[modulo(i*MULTIPLIER,MAX_POINTS)].x,p[modulo(i*MULTIPLIER,MAX_POINTS)].y);
        q[i+1].color=sf::Color::White;
    }
    
    sf::CircleShape circle;
    circle.setPointCount(MAX_POINTS);
    circle.setRadius(RADIUS);
    circle.setOrigin(RADIUS, RADIUS);
    circle.setPosition(RADIUS, RADIUS);
    circle.setOutlineThickness(5);
    circle.setOutlineColor(sf::Color::Red);
    circle.setFillColor(sf::Color::Transparent);
    
    sf::RenderWindow window(sf::VideoMode(RADIUS*2,RADIUS*2),"Epycicloid",sf::Style::Close);
    
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type==sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.draw(q);
        window.draw(circle);
        window.display();
    }
    
    
    return 0;
    
}


