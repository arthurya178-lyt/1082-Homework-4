#ifndef Ball_h
#define Ball_h
#include "Shape3D.h"
#include <string>
using namespace std;

class Ball : public Shape3D
{
private:
	double radius;
public:
	Ball();
	Ball(double, string _c, bool _f);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
	string toString();
};

#endif // !Ball_h