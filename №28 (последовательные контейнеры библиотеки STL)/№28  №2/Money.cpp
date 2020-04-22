//Трегубов Максим, лаб. №22, классы №3
#include <iostream>
#include "Money.h"
using namespace std;

//перегрузка операции присваивания 
Money& Money::operator=(const Money& m)
{
	//проверка на самоприсваивание 
	if (&m == this) return *this;
	rub = m.rub;
	kop = m.kop;
	return *this;
}
//перегрузка префиксной операции инкремент 
Money& Money::operator++()
{
	int temp = rub * 100 + kop;
	temp++;
	rub = temp / 100;
	kop = temp % 100;
	return *this;
}
//перегрузка постфиксной операции инскремент
Money Money::operator++(int)
{
	int temp = rub * 100 + kop;
	temp++;
	Money m(rub, kop);
	rub = temp / 100;
	kop = temp % 100;
	return m;
}
//перегрузка бинарной операции сложения 
Money Money::operator+(const Money& m)
{
	int temp1= rub * 100 + kop;
	int temp2 = m.rub * 100 + m.kop;
	Money p;
	p.rub = (temp1 + temp2) / 100;
	p.kop = (temp1 + temp2) % 100;
	return p;
}
Money Money::operator*(const Money& m)
{
	Money p;
	p.rub = m.rub * rub;
	p.kop = m.kop * kop;
	return p;
}
Money Money::operator/(const int a)
{
	Money p;
	p.rub = rub / a;
	p.kop = (kop / a)/10;
	return p;
}
//перегрузка глобальной функции - операции ввода 
istream& operator>>(istream& in, Money& m)
{
	cout << "RUB = "; in >> m.rub;
	cout << "KOP = "; in >> m.kop;
	return in;
}
//перегрузка глобальной функции - операции вывода 
ostream& operator<<(ostream& out, const Money& m)
{
	return (out << m.rub << "," << m.kop);
}

bool operator>(const Money& m1, const Money& m2)
{
	return ((m1.rub * 100) + m1.kop > (m2.rub * 100) + m2.kop);
}

bool operator>=(const Money& m1, const Money& m2)
{
	return ((m1.rub * 100) + m1.kop >= (m2.rub * 100) + m2.kop);
}

bool operator<(const Money& m1, const Money& m2)
{
	return ((m1.rub * 100) + m1.kop < (m2.rub * 100) + m2.kop);
}

bool operator<=(const Money& m1, const Money& m2)
{
	return ((m1.rub * 100) + m1.kop <= (m2.rub * 100) + m2.kop);
}

bool operator==(const Money& m1, const Money& m2)
{
	return ((m1.rub * 100) + m1.kop == (m2.rub * 100) + m2.kop);
}
