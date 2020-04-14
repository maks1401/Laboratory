//Трегубов Максим, лаб. №20, классы №2
#include <iostream>
#include <string>
#include <Windows.h>
#include "Enrollee.h"

using namespace std;

//функция для возврата объекта как результата
Enrollee make_apartment()
{
	string f;
	string s;
	int b;
	cout << "Введите имя: ";
	cin >> f;
	cout << "Введите специальность: ";
	cin >> s;
	cout << "Введите кол-во баллов ЕГЭ: ";
	cin >> b;
	Enrollee a(f, s, b);
	return a;

}

//функция для передачи объекта как параметра 
void print_apartment(Enrollee a)
{
	a.show();
}

int main()
{
    setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// конструктор без параметров
	Enrollee a1;
	a1.show();
	
	// конструктор с параметрами
	Enrollee a2("Anna", "Scientist", 78);
	a2.show();
	
	//конструктор копирования 
	Enrollee a3 = a2;
	a3.setname("Max");
	a3.setspecialty("Pilot");
	a3.setexams(100);
	
	// конструктор копирования 
	print_apartment(a3);
	
	//конструктор копирования 
	a1 = make_apartment();
	a1.show();
}

