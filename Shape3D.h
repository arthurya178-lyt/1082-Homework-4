#ifndef Shape3D_h
//layer 2
#define Shape3D_h
#include "Shape.h"

class Shape3D : public Shape
{
public:
	virtual double getVolume() = 0;
};

#endif