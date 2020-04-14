﻿//Трегубов Максим. лаб. №12, очередь

#include <iostream>
#include <cstring>
#include "Queue.h"

using namespace std;

int n;
Queue* pQueue = NULL;

int main() {
    setlocale(LC_ALL, "ru");
    int k;
    cout << "Меню:\n";
    cout << "1.Формирование очереди\n";
    cout << "2.Вывод очереди\n";
    cout << "3.Удалить все отрицательные элементы\n";
    cout << "4.Сортировка очереди\n";
    cout << "5.Очищение очереди\n";
    cout << "6.Выход\n\n";

    do {
        cout << "Введите шаг: ";
        cin >> k;
        switch (k) {
        case 1:
            cout << "Количество элементов в очереди: ";
            cin >> n;
            cout << "Введите элементы: ";
            pQueue = makeQueue(n);
            break;
        case 2:
            printQueue(pQueue);
            break;
        case 3:
            pQueue = removeNegativeQueues(pQueue);
            break;
        case 4:
            pQueue = insertionSortQueue(pQueue);
            break;
        case 5:
            clear(pQueue);
            break;
        }
    } while (k != 6);

    cout << "Конец";
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
