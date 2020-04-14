//Трегубов Максим, лаб. №20, классы №1
#include <iostream>
#include "fraction.h"
using namespace std;

int first;
double second;
double ka;


fraction make_fraction(int F, double S, double k)
{
	fraction t;
	t.Init(F, S, k);
	return t;
}

void main()
{
	setlocale(LC_ALL, "rus");
	fraction A;
	fraction B;
	fraction* С = new fraction;

	cout << "Объект А\n";
	A.Init(5, 0.75, 2.5);
	A.Show();

	cout << "\nОбъект B\n";
	B.Read();

	cout << "\nОбъект С\n";
	С->Init(4, 0.34, 3.2);
	С->Show();

	cout << "\nA.multiply(" << A.first << "\, " << A.second <<"\, "<<A.ka<< ") = " << A.multiply(first, second, ka, A) << "\n";
	cout << "B.multiply(" << B.first << "\, " << B.second << "\, " << B.ka << ") = " << B.multiply(first, second, ka, B) << "\n";
	cout << "С.multiply(" << С->first << "\, " << С->second << "\, " << С->ka << ") = " << С->multiply(first, second, ka, *С) << "\n";
}