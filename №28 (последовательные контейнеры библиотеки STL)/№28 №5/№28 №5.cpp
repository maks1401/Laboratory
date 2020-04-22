//Трегубов Максим, лаб. №28, задача №5
#include <iostream>
#include <vector>
#include <stack>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "list.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int lenght;
	cout << "Введите длину стека: ";
	cin >> lenght;
	stack <list> v;
	stack <list> v1;
	stack <list> v2;
	cout << endl << "Введите элементы стека:" << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << "Введите элементы:"<< i+1 <<"-ого списка"<< endl;
		list tmp (3);
		cin >> tmp;
		v.push(tmp);
	}
	cout << "Стек:" << endl;
	for (int i = 0; i < lenght; i++)
	{
		list tmp = v.top();
		cout << tmp << "  ";
		v.pop();
		v1.push(tmp);
	}
	list max (3);
	max = v1.top();
	while (!v1.empty())
	{
		list temp = v1.top();
		v1.pop();
		v.push(temp);
		if (temp > max)
			max = temp;

	}
	cout << endl << "Максимальный элемент стека: " << max << endl;
	cout << "Введите индекс, на который хотите добавить максмиальное значение: ";
	int p;
	cin >> p;
	if (p > v.size())
		cout << "Вы привысили длину стека" << endl;
	else
	{

		for (int j = 0; j < lenght - p; j++)
		{
			list tmp = v.top();
			v2.push(tmp);
			v.pop();

		}
		v.push(max);
		for (int j = 0; j < lenght - p; j++)
		{
			list tmp = v2.top();
			v.push(tmp);
			v2.pop();
		}

	}
	cout << "Стек:" << endl;
	for (int i = 0; i < lenght + 1; i++)
	{
		list tmp = v.top();		
		cout << tmp << "  ";
		v.pop();
		v1.push(tmp);
	}
	for (int i = 0; i < lenght + 1; i++)
	{
		list tmp = v1.top() * max;		
		v1.pop();
		v.push(tmp);
	}
	cout << endl << "Стек после умножение на максимальный элемент:" << endl;
	for (int i = 0; i < lenght + 1; i++)
	{
		list tmp = v.top();		
		cout << tmp << "  ";
		v.pop();
		v1.push(tmp);
	}
	list sm (3);
	for (int i = 0; i < lenght + 1; i++)
	{
		list tmp = v1.top();		
		v.push(tmp);
		sm += tmp;
		v1.pop();
	}
	cout << endl << "Сумма стеков: " << sm;
	list  armean = sm / v.size();
	cout << endl << "Среднее арифмитическое стека: " << armean << endl;
	stack <list> v3;
	for (int i = 0; i < lenght + 1; i++)
	{
		list tmp = v.top();		
		if (tmp < armean)
		{
			v3.push(tmp);
		}
		v.pop();
	}
	cout << "Стек после удаления всех элементов больше среднего арифмитического:" << endl;
	while (!v3.empty())
	{
		list tmp = v3.top();		
		cout << tmp << "  ";
		v3.pop();
	}
}
