#include "Field.h"

Field::Field() {}

Field::Field(Point origin, double width, double height, Point ballStartPoint, double ballDiameter) {
	endPoints[0] = Point(origin.x, origin.y);
	endPoints[1] = Point(origin.x + width, origin.y);
	endPoints[2] = Point(origin.x + width, origin.y + height);
	endPoints[3] = Point(origin.x, origin.y + height);

	ball = Ball(ballStartPoint, ballDiameter);
}

Field::Field(Point endPoints[4], Point ballStartPoint, double ballDiameter) {
	for (int i = 0; i < 4; ++i) {
		this->endPoints[i] = endPoints[i];
	}

	ball = Ball(ballStartPoint, ballDiameter);
}

void Field::hit(Point target, double power) {}
