//Трегубов Максим, лаб. №28, задача №2
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "Money.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int lenght;
	cout << "Введите длину вектора: ";
	cin >> lenght;
	vector <Money> v(lenght);
	cout << "Векор:" << endl;
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << "   ";
	cout << endl << "Введите элементы вектора:" << endl;
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
		cin >> *i;
	cout << "Векор:" << endl;
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << "   ";
	Money max;
	max = *v.begin();
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
		if (max < *i)
			max = *i;
	cout << endl << "Максимальный элемент вектора: " << max << endl;
	vector<Money>::iterator v2 = v.begin();
	cout << "Введите индекс, на который хотите добавить максмиальное значение: ";
	int p;
	cin >> p;
	if (p > v.size())
		cout << "Вы привысили длину вектора" << endl;
	else
	{
		for (int j = 0; j < p; j++)
			v2++;
		v.insert(v2, max);
	}
	cout << "Векор:" << endl;
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << "   ";
	Money sm;
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
	{
		sm = sm + *i;
	}
	Money  armean = sm / v.size();
	cout << endl << "Среднее арифмитическое вектора: " << armean << endl;
	vector<Money> vec;
	for (vector<Money>::iterator i = v.begin(); i != v.end(); i++)
	{
		if (*i < armean)
			vec.push_back(*i);
	}
	cout << "Вектор после удаления всех элементов больше среднего арифмитического:" << endl;
	for (vector<Money>::iterator i = vec.begin(); i != vec.end(); i++)
		cout << *i << "   ";
	cout << endl;
	for (vector<Money>::iterator i = vec.begin(); i != vec.end(); i++)
		* i = *i * max;
	cout << "Вектор после умножение на максимальный элемент:" << endl;
	for (vector<Money>::iterator i = vec.begin(); i != vec.end(); i++)
		cout << *i << "   ";

}
	
	
	
	
	
	
	
	
	
	
	
	
	/*

	*/