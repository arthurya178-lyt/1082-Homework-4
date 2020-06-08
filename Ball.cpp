#include "Ball.h"
#include <string>
#include <sstream>
using namespace std;

Ball::Ball()
{

}
Ball::Ball(double _r,string _c, bool _f)
{
	radius =  _r;
	setColor(_c);
	setFilled(_f);
}
void Ball::setRadius(double _r) 
{
	radius = _r;
}
double Ball::getRadius()
{
	return radius;
}
double Ball::getVolume()
{
	return 4.0 / 3.0*3.14159 *radius*radius*radius;
}
double Ball::getArea()
{
	return 4 * 3.14159 * radius *radius;
}
string Ball::toString()
{
	stringstream ss;
	ss << "ball, " << radius;
	return ss.str();
}