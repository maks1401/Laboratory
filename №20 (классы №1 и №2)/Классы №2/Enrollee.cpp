#include <iostream>
#include <string>
#include <Windows.h>
#include "Enrollee.h"

//���������� ��� ���������� 
Enrollee::Enrollee()
{
	name = "Bell";
	specialty = "Doctor";
	exams = 67;
	cout << "����������� ��� ���������� ��� �������" << this << endl;
}

//����������� � �����������
Enrollee::Enrollee(string f, string s, int b)
{
	name = f;
	specialty = s;
	exams = b;
	cout << "����������� � ����������� ��� �������" << this << endl;
}

//����������� ����������� 
Enrollee::Enrollee(const Enrollee& a)
{
	name = a.name;
	specialty = a.specialty;
	exams = a.exams;
	cout << "����������� ����������� ��� �������" << this << endl;
}

Enrollee::~Enrollee()
{
	cout << "���������� ��� �������" << this << endl;
}

//���������
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

//������������
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

//����� ��� ��������� ��������� 
void Enrollee::show()
{
	cout << "���:" << name << endl;
	cout << "�������������:" << specialty << endl;
	cout << "���:" << exams << endl;
}