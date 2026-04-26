#include <iostream>
#include "circle1.h"
using namespace std;

int main()
{
	Circle Circle1(1);
	Circle Circle2(5);
	Circle Circle3(12);

	cout << "The area of Cicle1 of radius: " << Circle1.getRadius() << " is " << Circle1.getArea() << endl;
	cout << "The area of Cicle2 of radius: " << Circle2.getRadius() << " is " << Circle2.getArea() << endl;
	cout << "The area of Cicle3 of radius: " << Circle3.getRadius() << " is " << Circle3.getArea() << endl;

	Circle2.setRadius(-1);
	cout<<"The area of Cicle2 of radius: " << Circle2.getRadius() << " is " << Circle2.getArea() << endl;

	return 0;
}