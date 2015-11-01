#pragma once

#include "Shape.h"



class Rectangle : public Shape
{
public:
	virtual void draw() {
		cout << "Rectangle class" << endl;
	}
	Rectangle() {};
	~Rectangle() {};
};

