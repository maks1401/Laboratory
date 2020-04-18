//Трегубов Максим, лаб. №26, обработка исключений - 1 вариант реализации
//Класс - контейнер СПИСОК с элементами типа int.
//Реализовать операции :
//[] – доступа по индексу;
//+вектор – добавление списка b к списку a(a + b)
//+ число – добавляет элемент в начало списка;
#include "set_2.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try
    {
        set_2 a(5);
        
		set_2 c(5);
		cout << "Введите элементы списка 'a': " << endl;
        cin >> a;
		cout << "Cписок 'a': " << a;
        cout << "Введите индекс элемента, который хотите вывести: ";
        int i;
        cin >> i;
        cout << "Ваш элемент: " << a[i] << endl;
		
		int s;
		cout << "Введите длину списка 'b': ";
		cin >> s;
		set_2 b(s);
		cout << "Введите элементы списка 'b': " << endl;
		cin >> b;

		cout << "Cписок 'b': "<< b;
		c = a + b;
		cout << "Тогда список 'c = a + b': " << c;
		cout << "Введите элемент, который хотите добавить в начало списка: ";
		cin >> i;
		c + i;
		cout << "Cписок 'с': " << c;
    }
    catch (const char* p)
    {
		cout << "Вызван обработчик const char*. исключение - " << p << endl;
		return -1;
    }
	
    return 0;
}
