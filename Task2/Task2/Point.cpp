#include <iostream>
#include <cmath>
#include <string>
#include "Point.h"
#include "ExtendedMath.h"

Point::Point(const double x, const double y) {
	this->x = x;
	this->y = y;
};

Point::Point(const Point& other) : Point(other.GetX(), other.GetY()) {};

double Point::GetX() const {
	return this->x;
};

double Point::GetY() const {
	return this->y;
};

std::string& Point::GetPolarView() const {
	double r, angle;
	r = sqrt(this->x * this->x + this->y * this->y);
	if (this->x == 0) {
		angle = asin(this->y / r);
	}
	else {
		angle = atan(this->y / this->x);
	};
	std::string r_str = std::to_string(r);
	std::string angle_str = std::to_string(angle);
	std::string answer = "(r = " + r_str + "; angle = " + angle_str + ")";
	return answer;
};

double Point::GetDistanceToOrigin() const 
{
	return sqrt(this->GetX() * this->GetX() + this->GetY() * this->GetY());
};

double Point::GetDistanceToPoint(const Point& other) const {
	return sqrt(pow((this->GetX() - other.GetX()), 2) + pow((this->GetY() - other.GetY()), 2));
	
};

bool Point::AreEqual(const Point& other) const {
	return this->x == other.x && this->y == other.y;
};

bool operator==(const Point& lha, const Point& rha)
{
	return lha.AreEqual(rha);
};


