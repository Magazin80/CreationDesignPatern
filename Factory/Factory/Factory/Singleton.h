#pragma once
#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton *getInstance()
	{
		if (mObject == NULL)
		{
			mObject = new Singleton();
		}
		return mObject;
	}

	void showMessage() { cout << "Singleton message" << endl; }

private:
	Singleton() { cout<< "Singleton constructor" << endl; };
	static Singleton *mObject;


};

