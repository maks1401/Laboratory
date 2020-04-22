#include "list.h"
#include <iostream>
using namespace std;

list::list(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = k;
	}
	beg.elem = &data[0];
	end.elem = &data[size];
}
list::list(const list& v)
{
	size = v.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
}
list::~list()
{
	delete[]data;
	data = nullptr;
}
list& list::operator=(const list& v)
{
	if (this == &v) { return *this; }
	size = v.size;
	if (data != nullptr) { delete[]data; }
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
	return *this;
}
int& list::operator[](int index)
{
	if (index < size) { return data[index]; }
	else { cout << "Error: index > size" << endl; }
}
list list::operator+(list& v)
{	
	list temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] + v.data[i];
	}
	return temp;
}
list list::operator+=(list& v)
{
	for (int i = 0; i < size; i++)
	{
		data[i] = data[i] + v.data[i];
	}
	return *this;
}
list list::operator*(list& v)
{
	list temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] * v.data[i];
	}
	return temp;
}
list list::operator/(int a)
{
	list temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] / a;
	}
	return temp;
}



ostream& operator<<(ostream& out, const list& v)
{
	for (int i = 0; i < v.size; ++i)
	{
		out << v.data[i] << " ";
	}
	return out;
}
istream& operator>>(istream& in, list& v)
{
	for (int i = 0; i < v.size; ++i)
	{
		in >> v.data[i];
	}
	return in;
}
int list::operator()()
{
	return size;
}
bool operator<(const list& v1, const list& v2)
{	
	return (v1.data[0] < v2.data[0] or v1.data[1] < v2.data[1] or v1.data[2] < v2.data[2]);
}
bool operator>(const list& v1, const list& v2)
{
	return (v1.data[0] > v2.data[0] or v1.data[1] > v2.data[1] or v1.data[2] > v2.data[2]);
}



