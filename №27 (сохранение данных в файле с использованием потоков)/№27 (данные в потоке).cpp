// Трегубов Максим, лаб.27, сохранение данных в файле с использованием потоков
#include "Pair.h"
#include "file.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
setlocale(LC_ALL, "ru");
Pair p,p1,p2;
int k, selection;
char file_name[30];
do
{
	cout << "1.Создать файл" << endl
		<< "2.Вывести файл" << endl
		<< "3.Удалить все записи равные заданному значению" << endl
		<< "4.Добавить записей после элемента с заданным значением."<<endl
		<< "5.Уменьшить все записи с заданным значением на число "<<endl
		<< "6.Выход" << endl;

	cin >> selection;
	switch (selection)
	{
	case 1:
		cout << "Имя файла: "; cin >> file_name;
		k = make_file(file_name);
		if (k < 0) cout << "Ошибка"<<endl;
		break;
	case 2:
		cout << "Имя файла: "; cin >> file_name;
		k = print_file(file_name);
		if (k == 0) cout << "Пустой файл"<<endl;
		if (k < 0)cout << "Ошибка" << endl;
		break;
	case 3:
		cout << "Имя файла: "; cin >> file_name;
		int value; cout << "Введите значение элемента, который хотите удалить: "; cin >> value;
		k = del_file(file_name, value);
		if (k < 0) cout << "Ошибка"<<endl;
		if (k == 0) cout << "Пустой файл" << endl;
		break;
	case 4:
		int number, amount, N;
		cout << "Имя файла: "; cin >> file_name;
		cout << "Введите значение элемента, после которого хотите добавить элементы:"; cin >> number;
		k = add_file(file_name, number);
		if (k < 0) cout << "Ошибка" << endl;;
		if (k == 0)cout << "Ошибка" << endl;
		break;
	case 5:
		cout << "Имя файла: "; cin >> file_name;
		cout << "Значение first:"; cin >> number;
		k = change_file(file_name, number);
		if (k < 0) cout << "Ошибка"<<endl;
		if (k == 0) cout << "Запись не найдена"<<endl;
		break;
	}
} while (selection != 6);
return selection;
}
