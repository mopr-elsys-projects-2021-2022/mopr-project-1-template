#include <iostream>
#include "Field.h"
using namespace std;

int main() {
	Field field;
	bool gameLoopRunning = true;
	char command;
	while(gameLoopRunning) {
		cin >> command;
		switch (command) {
		case 'c':
			cin >> command;
			switch (command) {
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
		case 'h':
			Point targetPoint;
			double power;
			cin >> targetPoint;
			cin >> power;
			field.hit(targetPoint, power);
			break;
		case 'q':
			gameLoopRunning = false;
			break;
		}
	}

	return 0;
}
