//�������� ������, ���. �21, ������ �4
#include "Person.h"
#include "EMPLOYEE.h"
#include <iostream>
#include<Windows.h>
using namespace std;

void f1 (Person& p)
{
	p.set_name("����");
	cout << p;
}
Person f2 ()
{
	EMPLOYEE l("������", 19, "�����", 50000);
	return l;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	Person a;
	cout << "������ a" << endl;
	cin >> a;
	cout << a;
	cout << "�������� ������������" << endl;
	Person b("���", 24);
	a = b;
	cout << a;
	cout << "������ c" << endl;
	EMPLOYEE c;
	cin >> c;
	c.salary_prize(c.salary);
	cout << c;
	cout << "�������� ������� ������ EMPLOYEE " << endl;
	f1(c);
	a = f2();
	cout << "������������ ������� � - ������� ������ EMPLOYEE" << endl;
	cout << a;
}