#include "Cube.h"
#include <string>
#include <sstream>
using namespace std;

Cube::Cube()
{
	
}
Cube::Cube(double _s, string _c, bool _f)
{
	side = _s;
	setColor(_c);
	setFilled(_f);
}
void Cube::setSide(double _s)
{
	side = _s;
}
double Cube::getSide()
{
	return side;
}
double Cube::getVolume()
{
	return side * side * side;
}
double Cube::getArea()
{
	return side *side * 6.0;
}

string Cube::toString()
{
	stringstream ss;
	ss << "cube, " << side;
	return ss.str();
}