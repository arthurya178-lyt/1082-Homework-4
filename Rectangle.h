#ifndef Rectangle_h
//layer 3
#define Rectangle_h
#include "Shape2D.h"
#include <string>
using namespace std;

class Rectangle : public Shape2D
{
private:
	double width,height;
public:
	Rectangle();
	Rectangle(double,double, string _c, bool _f);
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	double getPerimeter();
	double getArea();
	string toString();
};

#endif // !Rectangle.cpp