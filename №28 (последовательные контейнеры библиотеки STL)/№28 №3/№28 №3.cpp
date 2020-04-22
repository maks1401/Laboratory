//Трегубов Максим, лаб. №28, задача №3
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "list.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int amount;
	cout << "Введите количество списокв: ";
	cin >> amount;
	vector <list> v;
	for (int i = 0; i < amount; i++)
	{
		cout << "Введите 3 элементов " << i + 1 << "-ого списка: " << endl;
		list a(3);
		cin >> a;
		v.push_back(a);
	}
	cout << "Вектор:" << endl;
	for (vector<list>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i;
	list max = *v.begin();
	cout << endl << max;
	for (vector<list>::iterator i = v.begin()+1; i != v.end(); i++)
	{
		if (max < *i)
			max=*i;
	}		
	cout << endl << "Максимальный элемент вектора: " << max << endl;
	vector<list>::iterator v1 = v.begin();
	cout << "Введите индекс, на который хотите добавить максмиальное значение: ";
	int p;
	cin >> p;
	if (p > v.size())
		cout << "Вы привысили длину вектора" << endl;
	else
	{
		for (int j = 0; j < p; j++)
			v1++;
		v.insert(v1, max);
	}
	cout << "Векор:" << endl;
	for (vector<list>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << "   ";
	for (vector<list>::iterator i = v.begin(); i != v.end(); i++)
		* i = *i * max;
	cout<<endl << "Вектор после умножение на максимальный элемент:" << endl;
	for (vector<list>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << "   ";
	list sm = *v.begin();
	for (vector<list>::iterator i = v.begin()+1; i != v.end(); i++)
	{
		list smm = *i;
		sm = sm + smm;
	}
	cout <<endl << "Cумма: "<< sm;
	list  armean = sm / v.size();
	cout << endl << "Среднее арифмитическое вектора: " << armean << endl;
	vector<list> vec;
	for (vector<list>::iterator i = v.begin(); i != v.end(); i++)
		if (*i < armean)
			vec.push_back(*i);
	cout << "Вектор после удаления всех элементов больше среднего арифмитического:" << endl;
	for (vector<list>::iterator i = vec.begin(); i != vec.end(); i++)
		cout << *i << "   ";
	cout << endl;
}