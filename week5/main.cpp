#include <iostream>
#include "circle.h"
using namespace std;

//void printCircle(Circle c) //object by value 방식 , Circle c 와 main에 있는 Circle cirle 은 동일한 객체는 아니고 복사된 것! 서로 다른 객체
//{
//	cout << "The area of Cicle of radius: " << c.getRadius() << " is " << c.getArea() << endl; //여기에는 circle이라는 객체가 없어서 이거 parameter로 넣어줘야함
//}
void printCircle(Circle& c) //reference 방식, 객체c에 직접 접근
{
	cout << "The area of Cicle of radius: " << c.getRadius() << " is " << c.getArea() << endl; //여기에는 circle이라는 객체가 없어서 이거 parameter로 넣어줘야함
}


int main()
{
	cout << "number of object: " << Circle::getNumberOfObject() << endl;

	Circle circle1(1); //이 순간 바로 생성자가 하나 추가
	Circle circle2(5); //이 순간 바로 생성자가 하나 추가
	cout << "number of object: "<<Circle::getNumberOfObject() << endl;
	Circle circle3(25);//이 순간 바로 생성자가 하나 추가
	cout << "number of object: " << Circle::getNumberOfObject() << endl;

	Circle circleArray[10]; //반지름이 디폴트 값인 1로 주어지게 됨
	cout << "number of object: " << Circle::getNumberOfObject() << endl;
	Circle circleArray2[3] = { Circle(1),Circle(5),Circle(25) };
	cout << "number of object: " << Circle::getNumberOfObject() << endl;

	cout << "The area of Cicle1 of radius: " << circle1.getRadius() << " is " << circle1.getArea() << endl;
	cout << "The area of Cicle2 of radius: " << circle2.getRadius() << " is " << circle2.getArea() << endl;
	cout << "The area of Cicle3 of radius: " << circle3.getRadius() << " is " << circle3.getArea() << endl;

	printCircle(circle1); //참조에 의한 함수호출
	printCircle(circle2);
	printCircle(circle3);

	cout << "number of object: " << Circle::getNumberOfObject() << endl;

	for (int i = 0; i < 10; i++)
		printCircle(circleArray[i]);
	for (int i = 0; i < 3; i++)
		printCircle(circleArray2[i]);

	cout << "number of object: " << Circle::getNumberOfObject() << endl;

	return 0;
}