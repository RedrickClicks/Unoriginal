#include <iostream>
#include <cmath>
#include <string>
#include "Point.h"
#include "ExtendedMath.h"
#include <sstream>

Point::Point(const double x, const double y) {
	this->x = x;
	this->y = y;
};

Point::Point(const Point& other) : Point(other.GetX(), other.GetY()) {};

double Point::GetX() const 
{
	return this->x;
};

double Point::GetY() const
{
	return this->y;
};

std::string Point::SetNewX(double x)
{
	this->x = x;
	std::stringstream buffer;
	buffer << "(" << this->x << "; " << this->y << ")";
	return buffer.str();
}

std::string Point::SetNewY(double y)
{
	this->y = y;
	std::stringstream buffer;
	buffer << "(" << this->x << "; " << this->y << ")";
	return buffer.str();
}

std::string Point::GetPolarView() const 
{
	double r, angle;
	r = sqrt(this->GetX() * this->GetX() + this->GetY() * this->GetY());
	bool k = ExtMath::AreEqual(this->GetX(), 0);
	if (k == 1)
	{
		angle = asin(this->GetY() / r);
	}
	else
	{
		angle = atan(this->GetY() / this->GetX());
	};
	std::stringstream buffer;
	buffer << "(" << "r = " << r << "; angle = " << angle << ")";
	return buffer.str();
};

double Point::GetDistanceToOrigin() const 
{
	return sqrt(this->GetX() * this->GetX() + this->GetY() * this->GetY());
};

double Point::GetDistanceToPoint(const Point& other) const
{
	return sqrt(pow((this->GetX() - other.GetX()), 2) + pow((this->GetY() - other.GetY()), 2));
};

bool Point::AreEqual(const Point& other) const
{
	return ExtMath::AreEqual(this->GetX(), other.GetX()) && ExtMath::AreEqual(this->GetY(), other.GetY());
};

bool operator==(const Point& lha, const Point& rha)
{
	return lha.AreEqual(rha);
};

std::ostream& operator<< (std::ostream& out, Point& Point) {
	out << Point.GetPolarView();
	return out;
};
