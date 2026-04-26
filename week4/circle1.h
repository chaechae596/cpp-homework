#pragma once
class Circle
{
private:
	double radius;
public:
	Circle();
	Circle(double);
	double getArea();
	double getRadius(); // private 데이터인 radius에 접근하기 위한 접근자 get함수
	void setRadius(double); // private 데이터인 radius의 값을 변경하기 위한 변경자 set함수
};