#ifndef Cube_h
#define Cube_h
#include "Shape3D.h"
using namespace std;
#include <string>
using namespace std;

class Cube : public Shape3D
{
private:
	double side;
public:
	Cube();
	Cube(double, string _c, bool _f);
	void setSide(double);
	double getSide(); 
	double getVolume();
	double getArea();
	string toString();
};

#endif // !Cube_h