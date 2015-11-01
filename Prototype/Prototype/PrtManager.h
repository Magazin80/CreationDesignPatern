#pragma once
#include "Shape.h"

class PrtManager
{

public:
  PrtManager()
  {
    addPrototype(new Circle());
    addPrototype(new Rectangle());
  }
  /////////////////
  void addPrototype(Shape *iShape)
  {
    mPrototypes.push_back(iShape);
  }
  /////////////////
  Shape* createObject(ShapeType iType)
  {
   // cout<<"Size of mPrototypes "<<mPrototypes.size()<<endl;
    for (int idx=0; idx<mPrototypes.size(); idx++)
    {
     // cout<<"idx "<<idx<<endl;
      if (mPrototypes.at(idx)->getType()== iType)
      {
        return mPrototypes.at(idx)->clone();
      }
    }
    return NULL;
  }
  ~PrtManager(void)
  { 
    mPrototypes.clear();
  };

private:
   vector<Shape*> mPrototypes;

};
