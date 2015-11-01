// Prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PrtManager.h"

ShapeType shapesType[5] = {eCircle,eCircle,eRectangle,eRectangle,eCircle};


int Circle::mIdx;
int Rectangle::mIdx;

int _tmain(int argc, _TCHAR* argv[])
{

  Shape* shapes[5]; 
  
  PrtManager wPrototype;

  for (int idx=0; idx<5; idx++)
  {
    shapes[idx]=wPrototype.createObject(shapesType[idx]);
  }

  for (int idx=0; idx<5; idx++)
  {
    shapes[idx]->draw();
  }
  
  return 0;
}

