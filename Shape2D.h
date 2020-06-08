#ifndef Shape2D_h
//layer 2 
#define Shape2D_h
#include "Shape.h"

class Shape2D : public Shape
{
public:
	virtual double getPerimeter() = 0;
};

#endif // !Shape2D_h