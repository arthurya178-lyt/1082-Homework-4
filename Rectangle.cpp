#include "Rectangle.h"
#include <string>
#include <sstream>
using namespace std;

Rectangle::Rectangle()
{

}
Rectangle::Rectangle(double _w, double _h,string _c,bool _f)
{
	width = _w;
	height = _h;
	setColor(_c);
	setFilled(_f);
}
void Rectangle::setWidth(double _w)
{
	width = _w;
}
double Rectangle::getWidth()
{
	return width;
}
void Rectangle::setHeight(double _h)
{
	height = _h;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getPerimeter()
{
	return width * 2 + height * 2;
}
double Rectangle::getArea()
{
	return width * height;
}

string Rectangle::toString()
{
	stringstream ss;
	ss << "rectangle, " << width << ", " << height;
	return ss.str();
}