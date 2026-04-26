#include "circle1.h" //불러올 것은 객체가 생성되고 선언된 헤더파일

//범위는 클래스 Circle으로 제한?!

Circle::Circle() // 초기 생성자 생성 
{
	radius = 1;
}
Circle::Circle(double newradius)
{
	radius = newradius;
}
double Circle::getArea()
{
	return radius * radius * 3.14;
}
double Circle::getRadius() // 반지름에 접근하기 위해 생성된 접근자 get함수이기 때문에 그냥 반지름 반환해주기만 하면 됨
{
	return radius;
}
void Circle::setRadius(double newradius) // 반지름 값 변경을 위한 것
{
	radius = (newradius>=0)?newradius : 0;
}