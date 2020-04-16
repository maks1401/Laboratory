//Трегубов Максим, лаб. №23, атд. контейнеры


#include "list.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	list a(5);
	cout << "Введите 5 элементов объекта 'а', пусть последний элемент равен 23: " << endl; //доступ по индексу
	cin >> a;
	a[4] = 23;
	cout << "Вывод объекта 'а': " << endl;
	cout << a << endl;
	list b(5);
	cout << "Введите 5 элементов объекта 'b': " << endl;
	cin >> b;
	cout << "Вывод объекта 'b': " << endl;
	cout << b << endl;
	cout << "Тогда объект 'с=a+b': " << endl;
	list c(5);
	c = b + a;
	cout << c << endl;
	cout << "Длина объекта 'a': " <<endl<< a() << endl;
	cout << "Ставим указатель на послдний элемент объекта'а': "<<endl;
	Iterator i = a.last();
	--i;
	cout << *i << endl;
	int n;
	cout << "Введите номер элемента на который хотите перейти: ";
	cin >> n;
	for (int j=a(); j>n; j--)
	{
		--i;
	}
	cout << "(переход влево к элементу c номером n) элемент: " << endl;
	cout << *i << endl;
	cout << "Вывод значений элементов обекта 'а' с помощью указателя: " << endl;
	for (i = a.first(); i != a.last(); ++i)
	{
		cout << *i << " ";
	}
}