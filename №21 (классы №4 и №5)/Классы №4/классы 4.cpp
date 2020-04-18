//Трегубов Максим, лаб. № 4 и 5
#include "Person.h"
#include "EMPLOYEE.h"
#include <iostream>
#include<Windows.h>
using namespace std;

void f1 (Person& p)
{
	p.set_name("Åãîð");
	cout << p;
}
Person f2 ()
{
	EMPLOYEE l("Ìàêñèì", 19, "Ïèëîò", 50000);
	return l;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	Person a;
	cout << "Îáúåêò a" << endl;
	cin >> a;
	cout << a;
	cout << "Îïåðàöèÿ ïðèñâàèâàíèÿ" << endl;
	Person b("Àíÿ", 24);
	a = b;
	cout << a;
	cout << "Îáúåêò c" << endl;
	EMPLOYEE c;
	cin >> c;
	c.salary_prize(c.salary);
	cout << c;
	cout << "Ïåðåäà÷à îáúåêòà êëàññà EMPLOYEE " << endl;
	f1(c);
	a = f2();
	cout << "Ïðèñâàèâàíèå îáúåêòó à - îáúåêòà êëàññà EMPLOYEE" << endl;
	cout << a;
}
