#include "Pair.h"
#include <iostream>
using namespace std;

Pair& Pair::operator=(const Pair& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}

Pair& Pair::operator --()
{
	this->first--;
	return *this;
}

Pair Pair::operator-- (int)
{
	Pair temp(*this);
	this->second--;
	return temp;
}

Pair Pair::operator <(const Pair& t)
{
	if (this->first < t.first && this->second < t.second)
	{
		cout << "�� " << endl;
		return *this;
	}
	else
	{
		cout << "��� " << endl;
		return t;
	}

}

Pair Pair::operator >(const Pair& t)
{
	if (this->first > t.first&& this->second > t.second)
	{
		cout << "�� " << endl;
		return *this;
	}
	else
	{
		cout << "��� " << endl;
		return t;
	}
}

istream& operator>>(istream& in, Pair& t)
{
	cout << "first:"; cin >> t.first;
	cout << "second:"; cin >> t.second;
	return in;
}

ostream& operator<<(ostream& out, const Pair& t)
{
	out<< t.first << " : " << t.second << endl;
	return out; 
}

fstream& operator>>(fstream& fin, Pair& p)
{
	fin >> p.first;
	fin >> p.second;
	return fin;
}
fstream& operator<<(fstream& fout, const Pair& p)
{
	fout << p.first <<endl << p.second << endl;
	return fout;
}