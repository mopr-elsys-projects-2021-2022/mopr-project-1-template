#pragma once
#include "Point.h"

struct Ball {
	Point center;
	double diameter;

	Ball(Point center = Point(), double diameter = 5) : center(center), diameter(diameter) {}
};

