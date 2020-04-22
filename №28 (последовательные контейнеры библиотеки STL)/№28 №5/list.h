#pragma once
#pragma once
#include <iostream>
using namespace std;

class Iterator
{
	friend class list;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator==(const Iterator& it) { return elem == it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; };
	void operator++() { ++elem; };
	void operator--() { --elem; }
	int& operator*()const { return*elem; }
private:
	int* elem;
};

class list
{
public:
	list(int s, int k = 0);
	list(const list& v);
	~list();
	list& operator=(const list& v);
	int& operator[](int index);
	list operator+(list& v);
	list operator+=(list& v);
	list operator*(list& v);
	list operator/(int a);
	int operator()();
	friend bool operator<(const list& v1, const list& v2);
	friend bool operator>(const list& v1, const list& v2);
	friend  ostream& operator<<(ostream& out, const list& v);
	friend istream& operator>>(istream& in, list& v);
	Iterator first() { return beg; }
	Iterator last() { return end; }
private:
	int size;
	int* data;
	Iterator beg;
	Iterator end;
};
