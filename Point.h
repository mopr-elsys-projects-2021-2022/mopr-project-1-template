#pragma once
#include <iostream>
using namespace std;

struct Point {
	double x, y;

	Point(double x = 0, double y = 0) : x(x), y(y) {}

	friend istream& operator>>(istream& os, Point& p);
};

istream& operator>>(istream& in, Point& p) {
	in >> p.x;
	in >> p.y;

	return in;
}