//Трегубов Максим, лаб. №21, классы №4
#include "Person.h"
#include "EMPLOYEE.h"
#include <iostream>
#include<Windows.h>
using namespace std;

void f1 (Person& p)
{
	p.set_name("Егор");
	cout << p;
}
Person f2 ()
{
	EMPLOYEE l("Максим", 19, "Пилот", 50000);
	return l;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	Person a;
	cout << "Объект a" << endl;
	cin >> a;
	cout << a;
	cout << "Операция присваивания" << endl;
	Person b("Аня", 24);
	a = b;
	cout << a;
	cout << "Объект c" << endl;
	EMPLOYEE c;
	cin >> c;
	c.salary_prize(c.salary);
	cout << c;
	cout << "Передача объекта класса EMPLOYEE " << endl;
	f1(c);
	a = f2();
	cout << "Присваивание объекту а - объекта класса EMPLOYEE" << endl;
	cout << a;
}