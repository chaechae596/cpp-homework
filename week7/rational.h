#pragma once
#include <string>
#include <iostream>
using namespace std;

class Rational
{
private:
	int numerator;
	int denominator;
	static int gcd(int n, int d);

public:
	Rational();
	Rational(int numerator, int denominator);
	int getNumerator() const;
	int getDenominator() const;
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;
	int compareTo(const Rational& secondRational) const;
	bool equals(const Rational& secondRational) const;
	int intValue() const;
	double doubleValue() const;
	string toString() const;

	Rational(int numerator);// 형 변환을 위한 생성자, 정수를 유리수로!
	Rational& operator+=(const Rational& secondRational);
	Rational& operator-=(const Rational& secondRational);
	Rational& operator*=(const Rational& secondRational);
	Rational& operator/=(const Rational& secondRational);

	int& operator[](int index);

	Rational& operator++();
	Rational& operator--();

	Rational operator++(int dummy);
	Rational operator--(int dummy);
	Rational operator+() ;
	Rational operator-() ;

	friend ostream& operator<<(ostream&, const Rational&);
	friend istream& operator>>(istream&, Rational&);


};

//독립적인 전역함수
// 이항 연산자를 멤버함수로 만들면 매개변수가 1개, 즉 r2의 역할이어야 하는데
// 비멤버 함수로 만들면 왼쪽,오른쪽 피연산자를 모두 매개변수로 받음!

bool operator<(const Rational& r1, const Rational& r2);
bool operator<=(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);
bool operator>=(const Rational& r1, const Rational& r2);
bool operator!=(const Rational& r1, const Rational& r2);
bool operator==(const Rational& r1, const Rational& r2);

Rational operator+(const Rational& r1, const Rational& r2);// 전역함수는 const를 붙일 수 없다
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);