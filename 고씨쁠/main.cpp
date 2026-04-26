#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    Circle circle1; //Circle로부터 circle1이라는 객체를 만들어줌 // 이 경우는 아무것도 없는 생성자가 호출된다. 즉 자동적으로 반지름이 1인 객체가 생성된다.
    // Circle circle1(1) 과는 동일하나 같은 생성자를 호출한 것이 아님. (파라미터의 유무차이) 결과는 동일
    Circle circle2(25); // 괄호 안에 25를 썼으므로 반지름이 25인 객체 생성됨.
    Circle circle3(125); // 파라미터가 있으면 파라미터가 있는 생성자에 호출되고 파라미터가 없으면 파라미터가 없는 생성자에서 호출됨
    
    cout << "The area of Circle1 of radius : "<<circle1.radius<< "is" << circle1.getArea()<<endl; // 데이터에 접근
    cout << "The area of Circle2 of radius : "<<circle2.radius<< "is" << circle2.getArea()<<endl;
    cout << "The area of Circle3 of radius : "<<circle3.radius<< "is" << circle3.getArea()<<endl;
    
    return 0;
}