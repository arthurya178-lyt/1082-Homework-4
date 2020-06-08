#include "Circle.h"
#include <string>
#include <sstream>
using namespace std;

Circle::Circle()
{

}
Circle::Circle(double _r,string _c,bool _f)
{
	setColor(_c);
	radius = _r;
	setFilled(_f);
}
void Circle::setRadius(double _r)
{
	radius = _r;
}
double Circle::getRadius()
{
	return radius;
}
double Circle::getPerimeter()
{
	return 2.0 * 3.14159 * radius;
}
double Circle::getArea()
{
	return 3.14159 * radius * radius;
}
string Circle::toString()
{
	stringstream ss;
	ss << "circle, " << radius;
	return ss.str();
}