#include "Field.h"

int main() {
	Field field;
	bool gameLoopRunning = true;
	char command; // the value of command describes which option of the menu of the game is going to be used

	while(gameLoopRunning) {
		cout << "Enter a command (c - change parameters, h - hit ball, f - show field specs or q - quit): ";
		cin >> command;
		switch (command) {
        		// 'c' stands for "change" - it's for changing the parameters of the field or the ball
			case 'c':
				cout << "Enter a command (s - simple field, c - complex field or b - ball): ";
				cin >> command;
				switch (command) {
	            			// 's' stands for "simple case" - the horizontal side of the field is parallel to the x-axis, while the other one - to the y-axis
					case 's': 
						cout << endl;
						simpleCase(field);
						break; 
		           		// 'c' stands for "complex case" - it is not nessecary for the sides of the field to be perpendicular to any axis
					case 'c': 
						cout << endl;
						complexCase(field);
						break;
					// 'b' stands for "ball case" - keeps the same field and only changes the ball position
					case 'b':
						cout << endl;
						ballCase(field);
					default:
						cout << "Invalid command. Try again." << endl;
				}
				break;
        		// 'h' stands for "hit" - it's the option for defining in which direction and how strongly the ball is going to be hit
			case 'h': {
				cout << endl;
				Point targetPoint;
				double power;
				cout << "Input coordinates of target point: ";
				cin >> targetPoint;
				cout << "Input power: ";
				cin >> power;
				field.hit(targetPoint, power);
				break;
			}
			// 'f' stands for "field" - it's used to show the specifications of the current field and ball
			case 'f':
				cout << endl;
				cout << field;
				break;
	        	// 'q' stands for "quit" - it stops the game loop
			case 'q':
				gameLoopRunning = false;
				break;
			default:
				cout << "Invalid command. Try again." << endl;
		}
	}

	return 0;
}
