
	#include <iostream>
	#include <SFML/Graphics.hpp>

	int main() {
		sf::RenderWindow window(sf::VideoMode(1800, 800), "My window");		// create the window
		
		std::cout << "Создано окно" << '\n';
		
		while (window.isOpen()) {
			// check all the window's events that were triggered since the last iteration of the loop
			sf::Event event;
			while (window.pollEvent(event)) {
				// "close requested" event: we close the window
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear(sf::Color::Black); // clear the window with black color

			// draw everything here...
			// window.draw(...);

			window.display(); // end the current frame
		}

		return 0;
	}
