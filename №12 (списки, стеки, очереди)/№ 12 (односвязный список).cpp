//Трегубов Максим, лаб. №12, список односвязный
#include <iostream>
#include "ols.h"
#include<Windows.h>

using namespace std;

int numElement(int size);

int sizes;
Node* pbeg;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");

    int k;
    cout << "Меню:\n";
    cout << " 1.Формирование односвязного списка\n";
    cout << " 2.Вывод списка\n";
    cout << " 3.Добавление элемента в заданное место\n";
    cout << " 4.Очищение списка\n";
    cout << " 5.Выход\n\n";

    do {
        cout << "Введите шаг: ";
        cin >> k;
        switch (k) {
        case 1:
            cout << "Количество элементов в списке: ";
            cin >> sizes;
            if (sizes <= 0) {
                pbeg = makeList(sizes);
                break;
            }
            cout << "Введите элементы: ";
            pbeg = makeList(sizes);
            break;
        case 2:
            printList(pbeg);
            break;

        case 3:
            char c; int n;
            cout << "Введите новый символ: "; cin >> c;
            n = numElement(sizes + 1);
            pbeg = addNode(pbeg, c, n);
            break;
        case 4:
            clear(pbeg);
            cout << "Список очищен\n";
            break;
        }
    } while (k != 5);
    cout << "Конец\n";
}



int numElement(int size) {
    int number;
    do {
        cout << "Введите номер элемента (от 1 до " << size << "): ";
        cin >> number;
    } while (number > size || number <= 0);

    return number;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
