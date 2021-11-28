#include <iostream>
#include "Field.h"
using namespace std;

int main() {
	Field field;
	bool gameLoopRunning = true;
	// the value of command describes which option of the menu of the game is going to be used
	char command;
	while(gameLoopRunning) {
		cin >> command;
		switch (command) {
        // 'c' stands for "change" - it's for changing the parameters of the field or the ball
		case 'c':
			cin >> command;
			switch (command) {
            // 's' stands for "simple case" - defines a field with an origin point, a height and a width, and a starting point for the ball.
            // The horizontal side of the field is parallel to the x-axis, while the other one - to the y-axis
			case 's':
				Point origin;
				double width, height;
				Point ballStart;
				double diameter;
				cin >> origin;
				cin >> width >> height;
				cin >> ballStart;
				cin >> diameter;
				field = Field(origin, width, height, ballStart, diameter);
				break;
            // 'c' stands for "complex case" - here the field is defined by four points and a starting point for the ball
            // It is not nessecary for the sides of the field to be perpendicular to any axis
			case 'c':
				Point endPoints[4];
				Point ballStart;
				double diameter;
				cin >> ballStart;
				cin >> diameter;
				for (int i = 0; i < 4; ++i) {
					cin >> endPoints[i];
				}
				field = Field(endPoints, ballStart, diameter);
				break;
			}
			break;
        // 'h' stands for "hit" - it's the option for defining in which direction and how strongly the ball is going to be hit
		case 'h':
			Point targetPoint;
			double power;
			cin >> targetPoint;
			cin >> power;
			field.hit(targetPoint, power);
			break;
        // 'q' stands for "quit" - it stops the game loop
		case 'q':
			gameLoopRunning = false;
			break;
		}
	}

	return 0;
}
