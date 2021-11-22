#pragma once
#include "Point.h"
#include "Ball.h"

class Field {
	Ball ball;
	Point endPoints[4];

public:
	Field();
	Field(Point origin, double width, double height, Point ballStartPoint, double ballDiameter);
	Field(Point endPoints[4], Point ballStartPoint, double ballDiameter);

	void hit(Point target, double power);
};

