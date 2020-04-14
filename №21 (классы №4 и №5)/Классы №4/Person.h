#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(void);
	virtual ~Person(void);
	Person(string, int);
	Person(const Person&);
	string get_name() { return name; }
	int get_age() { return age; }
	void set_name(string);
	void set_age(int);
	Person& operator =(const Person&);
	friend istream& operator>>(istream& in, Person& p);
	friend ostream& operator<<(ostream& out, const Person& p);
protected:
	string name;
	int age;
};