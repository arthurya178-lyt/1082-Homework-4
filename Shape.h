#ifndef shape_h
//layer 1
#define shape_h
#include <string>
using namespace std;
class Shape
{
private:
	string color;
	bool filled;
public:
	Shape();
	Shape(string _c,bool _f);
	void setColor(string);
	void setFilled(bool);
	string getColor();
	bool isFilled();
	virtual double getArea() = 0;
	virtual string toString() = 0;
};

#endif // !shape_h