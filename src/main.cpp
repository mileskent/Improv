#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("/home/alexkca/Improv/res/vineboom.wav"))
        return -1;
    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();
    while (1) {;}
/*
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
*/
    return 0;
}


