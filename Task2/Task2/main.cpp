#include <iostream>
#include "Header.h"

using namespace std;
int main() {
	cout << "Enter the coordinates of the point" << endl;
	double a, b;
	cin >> a;
	cin >> b;
	Point XYZ(a, b);
	cout << "Select an action: \n1. Moving on the x-axis\n2. Moving on the y-axis\n3. Representation as polar coordinates\n4. Determining the distance from a point to the origin\n5. Determining the distance between two points\n6. Comparison for matching the coordinates of two points\n7. End the program\n";
	while (true) {
		int n;
		cin >> n;
		if (n == 1)
		{

		}
		if (n == 2)
		{
		
		}
		if (n == 3)
		{
		
		}
		if (n == 4) 
		{
			double Answer;
			Answer = XYZ.GetDistanceToOrigin(XYZ);
			cout << Answer;
		}
		if (n == 5)
		{

		}
		if (n == 6)
		{
		
		}
		if (n == 7)
		{
			break;
		}
		
	}
}