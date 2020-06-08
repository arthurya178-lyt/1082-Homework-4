#include <iostream>
#include <sstream>
#include <string>
#include<iomanip>
#include"Ball.h"
#include"Circle.h"
#include"Cube.h"
#include"Rectangle.h"
#include"Shape.h"
#include"Shape2D.h"
#include"Shape3D.h"
using namespace std;

void equalArea(Shape &shape1, Shape &shape2)
{
	if (shape1.getArea() == shape2.getArea())
	{
		cout << fixed << setprecision(2) << "circle " << shape1.getArea() << " == " << "rectangle " << shape2.getArea() << endl;
	}
	else
	{
		cout << fixed << setprecision(2) << "circle " << shape1.getArea() << " != " << "rectangle " << shape2.getArea() << endl;
	}
}
void equalVolume(Shape3D &shape1, Shape3D &shape2)
{
	if (shape1.getVolume() == shape2.getVolume())
	{
		cout << fixed << setprecision(2) << "ball " << shape1.getVolume() << " == " << "cube " << shape2.getVolume() << endl;
	}
	else
	{
		cout << fixed << setprecision(2) << "ball " << shape1.getVolume() << " != " << "cube " << shape2.getVolume() << endl;
	}
}
void equalPerimeter(Shape2D &shape1, Shape2D &shape2)
{
	if (shape1.getPerimeter() == shape2.getPerimeter())
	{
		cout <<fixed <<setprecision(2) << "circle " << shape1.getPerimeter() << " == " << "rectangle " << shape2.getPerimeter() << endl;
	}
	else
	{
		cout << fixed << setprecision(2) << "circle " << shape1.getPerimeter() << " != " << "rectangle " << shape2.getPerimeter() << endl;
	}
}
void display(Shape &shape1)
{
	stringstream ss;
	ss << fixed << setprecision(2) << shape1.toString() << ", " << shape1.getColor() << ", " << shape1.getArea();
	cout << ss.str() << endl;
}

int main()
{
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);
	display(circle);
	display(rectangle);
	display(ball);
	display(cube);
	equalPerimeter(circle, rectangle);
	equalVolume(ball, cube);
}