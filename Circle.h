#ifndef Circle_h
//layer 3
#define Cirle_h
#include "Shape2D.h"
#include <string>
using namespace std;


class Circle : public Shape2D
{
private:
	double radius;
public:
	Circle();
	Circle(double,string,bool);
	void setRadius(double);
	double getRadius();
	double getPerimeter();
	double getArea();
	string toString();
};

#endif // !Cirle
