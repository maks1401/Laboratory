//Трегубов Максим, лаб. №24, шаблоны классов
#include "list.h"
#include "template.h"
#include "Money.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите пять элементов списка 'a': ";
	cout << '\n';
	set<int>a(5, 0);
	cin >> a;
	cout << a << endl;
	cout << "Список 'b': ";
	set<int>b(5,2);
	cout << b << endl;
	set<int>c(5, 0);
	cout << "Тогда список 'с=a+b': ";
	c = a + b;
	cout << c << endl;
	int s;
	cout << "Введите константу, которую хотите добавить к 'с': ";
	cin >> s;
	set<int>d(5, s);
	cout << "Тогда список 'с': ";
	c = c + d;
	cout << c << endl;	
	
	Money t;
	cin >> t;
	cout << t << endl;
	Money q;
	cin >> q;
	cout << q << endl;
	
	cout << "Введите две суммы: "<<endl;
	set<Money>R(2,q);
	cin >> R;
	cout << R ;
	
	cout<< endl <<"Доступ по индексу 1: "<< R[1];//доступ по индексу
	   

}
