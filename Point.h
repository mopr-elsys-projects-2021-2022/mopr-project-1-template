#pragma once

#include <iostream>
using namespace std;

struct Point {
	double x, y;

	Point(double x = 0, double y = 0) : x(x), y(y) {}
};

inline istream& operator>>(istream& in, Point& p) {
	in >> p.x;
	in >> p.y;

	return in;
}

inline ostream& operator<<(ostream& os, const Point& p) {
	os << "(" << p.x << ", " << p.y << ")";

	return os;
}