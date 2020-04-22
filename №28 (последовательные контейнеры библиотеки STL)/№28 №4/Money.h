/*Создать класс Money для работы с денежными суммами. Число должно быть представленно двумя
полям: типа long для рублей и типа int для копеек. Дробная часть числа при выводе на экран
должна быть отделена от целой части запятой. Реализовать:
== сложение суммы и дробного числа 
== операции сравнения (<,>,==)
*/
#include <iostream>
using namespace std;

class Money
{
	long rub;
	int kop;
public:
	Money() { rub = 0; kop = 0; };
	Money(long r, int k) { rub = r, kop = k; };
	Money(const Money& m) { rub = m.rub, kop = m.kop; }
	~Money() {};
	int get_min() { return rub; }
	int get_sec() { return kop; }
	void set_min(long r) { rub = r; }
	void set_sec(int k) { kop = k; }

	//перегруженные операции
	Money& operator=(const Money&);
	Money& operator++();
	Money operator++(int); //постфиксная операция 
	Money operator+(const Money&);
	Money operator+=(const Money&);
	Money operator*(const Money&);
	Money operator/(const int);
	friend bool operator>(const Money& m1, const Money& m2);
	friend bool operator<=(const Money& m1, const Money& m2);
	friend bool operator<(const Money& m1, const Money& m2);
	friend bool operator>=(const Money& m1, const Money& m2);
	friend bool operator==(const Money& m1, const Money& m2);
	//глобальные функции ввода - вывода
	friend istream& operator>>(istream& in, Money& t);
	friend ostream& operator<<(ostream& out, const Money& t);
};