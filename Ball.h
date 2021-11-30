#pragma once

#include "Point.h"

struct Ball {
	Point center;
	double diameter;

	Ball(Point center = Point(), double diameter = 5) : center(center), diameter(diameter) {}
};

inline istream& operator>>(istream& in, Ball& b) {
	cout << "Starting point of ball: ";
	in >> b.center;
	cout << "Diameter of ball: ";
	in >> b.diameter;

	return in;
}

inline ostream& operator<<(ostream& os, const Ball& b) {
	os << "Ball center - " << b.center << endl;
	os << "Ball diameter - " << b.diameter << endl;

	return os;
}