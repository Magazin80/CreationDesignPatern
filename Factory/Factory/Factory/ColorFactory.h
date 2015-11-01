#pragma once
#include "Color.h"
#include "AbstractFactory.h"

class ColorFactory : public AbstractFactory
{
public:

	Color* getColor(string iColor)
	{
		if (iColor == "")
		{
			return NULL;
		}

		if (iColor == "White")
		{
			return new White();
		}
		else if (iColor == "Blue")
		{
			return new Blue();
		}
		else if (iColor == "Green")
		{
			return new Green();
		}
		else
		{
			return NULL;
		}
	}
};

