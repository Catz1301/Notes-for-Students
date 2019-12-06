// main.cpp

#import <SFML/Graphics.hpp>
#import "main.h"

using namespace sf;
sf::RenderWindow window(sf::VideoMode(800,600), "Notes for Students");

doSplash() {
	window.setVisible(false);
	RenderWindow splashWindow(VideoMode(800, 600), "Notes for Students");
	splashWindow.setStyle(sf::Style::None);
	
	Clock tim;
	tim.restart();
	float timeElapsed = 0;
	bool completed = false;
	while (splashWindow.isOpen()) {
		timeElapsed += tim.getElapsedTime().asMilliseconds();
		tim.restart();
		if (timeElaped >= 5000) {
			splashwindow.setVisible(false);
			window.setVisible(true);
			splashWindow.close();
			completed = true;
		}
		Event e;
		while (splashWindow.pollEvent(e)) {
			if (e.type == Event::Closed)
				splashWindow.close();
		}
		
		splashWindow.clear(Color(119, 119, 119));
		splashWindow.display();
		}
	}
	if (completed == true)
		return 0;
	else
		return 1;
}

int main() {
	if (doSplash() == 1) {
		return 1;
	}
	//Rect construct(X1, Y1, X2, Y2);
}
	
	
