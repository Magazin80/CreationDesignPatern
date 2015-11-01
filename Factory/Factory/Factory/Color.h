#pragma once
#include <iostream>
#include <string>
using namespace std;

class Color
{
public:
	virtual void fill() = 0;
};
////////////////////////////////////////
class Green : public Color
{
public:
	virtual void fill() {
		cout << "Green color" << endl;
	}

};
////////////////////////////////////////
class Blue : public Color
{
public:
	virtual void fill() {
		cout << "Blue color" << endl;
	}

};
////////////////////////////////////////
class White : public Color
{
public:
	virtual void fill() {
		cout << "White color" << endl;
	}

};
////////////////////////////////////////

