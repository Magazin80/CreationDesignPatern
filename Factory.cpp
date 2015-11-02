// Factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ShapeFactory.h"
#include "ColorFactory.h"
#include "AbstractFactory.h"

#include "Singleton.h"

AbstractFactory *getFactory(string iFactory)
{
	{
		//random
	}
	if (iFactory == "Shape")
	{
		return new ShapeFactory();
	}
	else if (iFactory == "Color")
	{
		return new ColorFactory();
	}
	else 
	{
		return NULL;
	}
}

using namespace std;

Singleton *Singleton::mObject = NULL;


int _tmain(int argc, _TCHAR* argv[])
{
	Shape *wShape;
	ShapeFactory wShapeFactory;
//add new comments
//new1 l kjlk jlkj lk
//Hello
//Andrew 3
int www= 5;

	wShape = wShapeFactory.getShape("Rectangle");
	wShape->draw();

	wShape = wShapeFactory.getShape("Circle");
	wShape->draw();

	wShape = wShapeFactory.getShape("Square");
	wShape->draw();

	cout << "ABSTRACT FACTORY PATERN" << endl;

	AbstractFactory *wFactory;

	wFactory = getFactory("Shape");
	wShape = wFactory->getShape("Rectangle");
	wShape->draw();

	AbstractFactory *wColorFactory = getFactory("Color");
	Color *wColor = wColorFactory->getColor("Green");
	wColor->fill();

	cout << "SINGLETON" << endl;

	// Singleton wSingleton; -  generate error , constructor is private
	Singleton *wSingleton1 = Singleton::getInstance();
	wSingleton1->showMessage();

	Singleton *wSingleton2 = Singleton::getInstance();
	wSingleton2->showMessage();
	// only one constructor





	return 0;
}

