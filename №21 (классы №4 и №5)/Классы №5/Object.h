#pragma once
#include "Object.cpp"
#include <iostream>
using namespace std;

class Object
{
public:
	Object(void) {};
	~Object(void) {};
	virtual void Show() = 0;
};

