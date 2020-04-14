#include <iostream>
#include <string>
#include <Windows.h>
#include "Enrollee.h"

//конструтор без параметров 
Enrollee::Enrollee()
{
	name = "Bell";
	specialty = "Doctor";
	exams = 67;
	cout << "Конструктор без параметров для объекта" << this << endl;
}

//конструктор с параметрами
Enrollee::Enrollee(string f, string s, int b)
{
	name = f;
	specialty = s;
	exams = b;
	cout << "Конструктор с параметрами для объекта" << this << endl;
}

//конструктор копирования 
Enrollee::Enrollee(const Enrollee& a)
{
	name = a.name;
	specialty = a.specialty;
	exams = a.exams;
	cout << "Конструктор копирования для объекта" << this << endl;
}

Enrollee::~Enrollee()
{
	cout << "Деструктор для объекта" << this << endl;
}

//селекторы
string Enrollee::getname()
{
	return name;
}
string Enrollee::getspecialty()
{
	return specialty;
}
int Enrollee::getexams()
{
	return exams;
}

//модификаторы
void Enrollee::setname(string name)
{
	this->name = name;
}
void Enrollee::setspecialty(string specialty)
{
	this->specialty = specialty;
}
void Enrollee::setexams(int exams)
{
	this->exams = exams;
}

//метод для просмотра атрибутов 
void Enrollee::show()
{
	cout << "Имя:" << name << endl;
	cout << "Спецаильность:" << specialty << endl;
	cout << "ЕГЭ:" << exams << endl;
}