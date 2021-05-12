#include <iostream>
#include <cmath>
#include <string>
#include "Point.h"

Point::Point(const double x, const double y) {
	this->x = x;
	this->y = y;
};

Point::Point(const Point& other): x(other.x), y(other.y) {};

double Point::GetX() const {
	return x;
};

double Point::GetY() const {
	return y;
};

std::string& Point::GetPolarView() const {
	double r, angle;
	r = sqrt(x * x + y * y);
	if (x == 0) {
		angle = asin(y / r);
	}
	else {
		angle = atan(y / x);
	};
	std::string r_str = std::to_string(r);
	std::string angle_str = std::to_string(angle);
	std::string answer = "(r = " + r_str + "; angle = " + angle_str + ")";

};

double Point::GetDistanceToOrigin() const {
	double answer = sqrt(x * x + y * y);
	return answer;
};

double Point::GetDistanceToPoint(const Point& other) const {
	double answer = sqrt(pow((x - other.x), 2) + pow((y - other.y), 2));
	return answer;
};

bool Point::AreEqual(const Point& other) const {
	return this->x == other.x && this->y == other.y;
}

