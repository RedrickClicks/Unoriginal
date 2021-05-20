#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

int main()
{
	auto one = Point(2.64, 7);
	auto two = Point(3, 5.6);
	auto &ans1 = one.GetPolarView();
	cout << ans1;
	//auto ans2 = one.GetDistanceToOrigin();
	//cout << ans2 << endl;
	//auto ans3 = one.GetDistanceToPoint(two);
	//cout << ans3;
}