#pragma once
class Circle
{
private:
	double radius;
	static int numberOfObject;
public:
	Circle();
	Circle(double);
	double getArea() const ;
	double getRadius() const;//이 함수 안에서는 데이터필드 수정이 없다
	static int getNumberOfObject();
	void setRadius(double);
};