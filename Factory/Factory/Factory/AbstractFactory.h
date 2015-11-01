#pragma once
#include "Color.h"
#include "Shape.h"

class AbstractFactory
{
public:
	virtual Shape *getShape(string iShape) { return NULL; };
	virtual Color *getColor(string iColor) { return NULL; };

};

