#include <iostream>
#include "fraction.h"
#include <cmath>
using namespace std;

void fraction::Init(int F, double S, double k)
{
	first = F;
	second = S;
	ka = k;
}

void fraction::Read()
{
	setlocale(LC_ALL, "rus");
	cout << "Целая часть: ";
	cin >> first;
	cout << "Дробная часть: ";
	cin >> second;
	cout << "k: ";
	cin >> ka;
}
void fraction::Show()
{
	cout << "Целая часть: " << first << endl;
	cout << "Дробная часть: " << second << endl;
	cout << "k: " << ka << endl;
}
double fraction::multiply(int first, double second, double ka, fraction& T)
{
		return  (T.first + T.second) * T.ka;
}