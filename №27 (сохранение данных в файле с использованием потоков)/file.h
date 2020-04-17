#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;

int make_file(const char* f_name)
{
	fstream stream(f_name, ios::out);
	if (!stream) return -1;
	int n;
	Pair p;
	cout << "Количество элементов:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		stream << p << endl;
	}
	stream.close();
	return n;
}

int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);
	if (!stream) return-1;
	Pair p; int i = 0;
	while (stream>>p)
	{
		cout << p;
		i++;
	}
	stream.close();
	return i;
}

int del_file(const char* f_name, int k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream) return -1;
	int i = 0,n=0; Pair p;
	while (stream >> p)
	{
		n += p.get_first();
		n += p.get_second();
		if (stream.eof()) break;	
		if (n != k) temp << p;
		i++;
		n = 0;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}

int add_file(const char* f_name, int k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream) return -1;
	Pair p, pp; int i = 0, l = 0, n, s = 0, c = 0;
	cout << "Количество элементов:"; cin >> n;
	while (stream >> p)
	{
		s = p.get_first() + p.get_second();
		if (stream.eof()) break;
		temp << p;
		if (s == k)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> pp;
				temp << pp << endl;
				l++;
			}
		}
	}	
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}	
	


int add_end(const char* f_name)
{
	fstream stream(f_name, ios::app);
	if (!stream) return -1;
	int i = 0, n;
	Pair p;
	cout << "Количество элементов:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		stream << p << endl;
	}
	return i;
}

int change_file(const char* f_name, int k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream) return -1;
	Pair p; int i = 0, l = 0;
	int L;
	while (!stream.eof())
	{
		stream >> p;
		if (stream.eof()) break;
		if (p.get_first() == k)
		{
			cout << p << " - уменьшить на:"; cin >> L;
			p.set_first(L);
			temp << p;
			l++;
		}
		else temp << p;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;	
}
