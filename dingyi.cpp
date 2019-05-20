#include<iostream>
#include"shape.h"
#include<cmath>
using namespace std;
void Circle::shape()
{
	cout << "Shape : circle" << endl;
	cout << "Radius = " << radius << endl;
}
void Circle::area()
{
	float m = 3.14159*radius*radius;
	cout << "Area = " << m << endl;
}
void Rectangle::shape()
{
	cout << "Shape : rectangle" << endl;
	cout << "Long = " << longth << ", Wide = " << wide << endl;
}
void Rectangle::area()
{
	float m;
	m = longth*wide;
	cout << "Area = " << m << endl;
}
void Triangle::shape()
{
	cout << "Shape : Triangle" << endl;
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}
void Triangle::area()
{
	float p = (a + b + c) / 2;
	float m;
	m = sqrt((a + b + c)*(a + b - c)*(a + c - b)*(b + c - a)) / 4;
	cout << "Area = " << m << endl;
}