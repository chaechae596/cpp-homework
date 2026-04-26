#include "circle.h"

Circle::Circle()
{
    radius = 1;
}
Circle::Circle(double newradius)
{
    radius = newradius;
}
double Circle::getArea()
{
    return 3.14*radius*radius;
}
// double Circle::getradius()
// {
//     return radius;
// }