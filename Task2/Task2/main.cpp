#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

int main()
{
	double x, y;
	std::string answer;
	cin >> x;
	cin >> y;
	Point z(x, y);
	//answer = z.GetPolarView();
	//answer = z.GetDistanceToOrigin();
	answer = z.GetDistanceToPoint();
	cout << answer;
}