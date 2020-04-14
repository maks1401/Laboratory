//Трегубов Максим, лаб. №22,классы №3
#include <iostream>
#include "Money.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int k;
	Money a;
	Money b;
	Money c;
	Money d;
	cin >> a;
	cin >> b;
	if (a > b)
		c = a;
	else if (a < b)
		c = b;
	else
		c = a + b;
	cout << "a == " << a << endl;
	cout << "b == " << b << endl;
	cout << "MAX == " << c << endl;
	cout << "Сколько копеек добавить к a: ";
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		a++;
	}
	cout << "a == " << a << endl;
}
