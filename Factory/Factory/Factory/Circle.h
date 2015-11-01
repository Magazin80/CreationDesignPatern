#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	virtual void draw() {
		cout << "Circle class" << endl;
	}
	Circle() {};
	~Circle() {};
};

