#include "circle.h"

int Circle::numberOfObject = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObject++;
}
Circle::Circle(double newradius)
{
	radius = newradius;
	numberOfObject++;
	
}
double Circle::getArea() const
{
	return radius * radius * 3.14;
}
double Circle::getRadius() const
{
	return radius;
}
void Circle::setRadius(double newradius)
{
	radius = newradius;
}
int Circle::getNumberOfObject()
{
	return numberOfObject;
}