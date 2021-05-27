#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

int main()
{
	auto one = Point(2.64, 7);
	auto two = Point(3, 5.6);


	cout << one.SetNewX(6.8) << "\n";
	cout << one.SetNewY(4) << "\n";
	cout << one.GetPolarView() << "\n";
	cout << one.GetDistanceToOrigin() << "\n";
	cout << one.GetDistanceToPoint(two) << "\n";
	cout << one.AreEqual(two);
} 