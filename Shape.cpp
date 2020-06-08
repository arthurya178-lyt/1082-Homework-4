#include "Shape.h"

Shape::Shape()
{

}
Shape::Shape(string _c, bool _f)
{
	color = _c;
	filled = _f;
}
void Shape::setColor(string _c)
{
	color = _c;
}
void Shape::setFilled(bool _f)
{
	filled = _f;
}
string Shape::getColor()
{
	return color;
}
bool Shape::isFilled()
{
	return filled;
}
