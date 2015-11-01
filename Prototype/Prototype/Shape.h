#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum ShapeType {eCircle, eRectangle, eSquare};

class Shape;

///////////////////////////
class Shape
{
public:
  virtual void      draw()=0;
  virtual ShapeType getType() = 0;
  virtual Shape*    clone() = 0;

};

////////////////////////////////////

class Circle : public Shape
{
    friend class PrtManager;
public: 
    void draw() {cout<<"Shape draw"<<endl;}
    Shape* clone()
    {
      return new Circle(1);
    }
   ShapeType  getType(){return eCircle;}
   ~Circle() {};
protected:
  Circle()
  {
    cout<<"Create Circle prototype"<<endl;  
    mIdx =0;
  }
  Circle(int iIdx)
  {
    mIdx ++;
    cout<<"Circle "<<mIdx<<" clone is created"<<endl;
  }


private:
  static int mIdx;
  ShapeType mType;


};
////////////////////////////////////

class Rectangle : public Shape
{
  friend class PrtManager;
public: 
  void draw() {cout<<"Rectangle draw"<<endl;}
  Shape* clone()
  {
    return new Rectangle(1);
  }
   ShapeType  getType(){return eRectangle;}
  ~Rectangle() {};
protected:
  Rectangle()
  {
    cout<<"Create Rectangle prototype"<<endl;  
    mIdx =0;
  }
  Rectangle(int iIdx)
  {
    mIdx ++;
    cout<<"Rectangle "<<mIdx<<" clone is created"<<endl;
  }


private:
  static int mIdx;
  ShapeType mType;


};