//Трегубов Максим, лаб. №28, задача №4
#include <iostream>
#include <vector>
#include <stack>
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
	cout << "Введите длину стека: ";
	cin >> lenght;
	stack <Money> v;
	stack <Money> v1;
	stack <Money> v2;
	cout << endl << "Введите элементы стека:" << endl;
	for (int i = 0; i < lenght; i++)
	{
		Money tmp;
		cin >> tmp;
		v.push(tmp);
	}
	cout << "Стека:" << endl;
	for (int i = 0; i < lenght; i++)
	{
		Money tmp;
		tmp = v.top();
		cout << tmp << "  ";
		v.pop();
		v1.push(tmp);
	}
	Money max;
	max = v1.top();
	while (!v1.empty())
	{
		Money temp = v1.top();
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
			Money tmp = v.top();
			v2.push(tmp);
			v.pop();

		}
		v.push(max);
		for (int j = 0; j < lenght - p; j++)
		{
			Money tmp = v2.top();
			v.push(tmp);
			v2.pop();
		}

	}
	cout << "Стек:" << endl;
	for (int i = 0; i < lenght + 1; i++)
	{
		Money tmp;
		tmp = v.top();
		cout << tmp << "  ";
		v.pop();
		v1.push(tmp);
	}
	for (int i = 0; i < lenght + 1; i++)
	{
		Money tmp;
		tmp = v1.top() * max;
		v1.pop();
		v.push(tmp);
	}
	cout << endl << "Стек после умножение на максимальный элемент:" << endl;
	for (int i = 0; i < lenght + 1; i++)
	{
		Money tmp;
		tmp = v.top();
		cout << tmp << "  ";
		v.pop();
		v1.push(tmp);
	}
	Money sm;	
	for (int i = 0; i < lenght + 1; i++)
	{
		Money tmp;
		tmp = v1.top();
		v.push(tmp);
		sm +=tmp;
		v1.pop();
	}
	cout << endl << "Сумма стеков: " << sm;
	Money  armean = sm / v.size();
	cout << endl << "Среднее арифмитическое стека: " << armean << endl;
	stack <Money> v3;
	for (int i = 0; i < lenght + 1; i++)
	{
		Money tmp;
		tmp = v.top();
		if (tmp < armean)
		{
			v3.push(tmp);
		}
		v.pop();
	}
	cout << "Стек после удаления всех элементов больше среднего арифмитического:" << endl;
	while (!v3.empty())
	{
		Money tmp;
		tmp = v3.top();
		cout << tmp << "  ";
		v3.pop();
	}
}
