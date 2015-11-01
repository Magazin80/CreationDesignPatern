#pragma once
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "AbstractFactory.h"
#include <string>

class ShapeFactory : public AbstractFactory
{
public:
	ShapeFactory() {};
	~ShapeFactory() {};

	Shape* getShape(string iShape)
	{
		if (iShape == "")
		{
			return NULL;
		}

		if (iShape == "Rectangle")
		{
			return new Rectangle();
		}
		else if (iShape == "Circle")
		{
			return new Circle();
		}
		else if (iShape == "Square")
		{
			return new Square();
		}
		else
		{
			return NULL;
		}
	}
};

