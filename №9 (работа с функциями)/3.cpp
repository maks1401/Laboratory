//Трегубов Максим, лаб. №9, 3 столбик
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int n=10, tmp, k;
double vesh;
char simv;
int m=10;
int b=10;

int* A = new int[n];
double* A2 = new double[m];
char* A3 = new char[b];


void FillArray(int* pA, int n)
{
    for (int i = 0; i < n; i++)
    {
        pA[i] = rand() % 100;
    }
}

void FillArray(double* pA, int m)
{
    for (int i = 0; i < m; i++)
    {
        pA[i] = (double)(1 + rand() % 100) / 10;
    }
}

void FillArray(char* pA, int b)
{
    for (int i = 0; i < b; i++)
    {
        cin >> pA[i];
    }
    cout << endl;
}
void PrintArray(int* pA, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << pA[i] << " ";
    }
    cout << endl;
}

void PrintArray(double* pA, int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << pA[i] << " ";
    }
    cout << endl;
}

void PrintArray(char* pA, int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << pA[i] << " ";
    }
    cout << endl;
}

int* push_back(int*& pA, int& n, int tmp, int k)
{
    n++;
    int* newpA = new int[n];
    for (int i = 0; i <tmp; i++)
    {
        newpA[i] = pA[i];
    }
    for (int i = tmp; i < n+1; i++)
    {
        newpA[i+1] = pA[i];
    }   
    newpA[tmp] = k;    
    delete[]pA;
    pA = newpA;
    return pA;
}

double* push_back(double*& pA, int& m, int tmp, double k)
{
    m++;
    double* newpA = new double[m];
    for (int i = 0; i < tmp; i++)
    {
        newpA[i] = pA[i];
    }
    for (int i = tmp; i < m+1; i++)
    {
        newpA[i+1] = pA[i];
    }
    newpA[tmp] = vesh;
    delete[]pA;
    pA = newpA;
    return pA;
}

char* push_back(char*& pA, int& b, int tmp,char k)
{
    b++;
    char* newpA = new char[b];
    for (int i = 0; i < tmp; i++)
    {
        newpA[i] = pA[i];
    }
    for (int i = tmp; i < b+1; i++)
    {
        newpA[i+1] = pA[i];
    }
    newpA[tmp] = k;
    delete[]pA;
    pA = newpA;
    return pA;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");  
    int selection;
    do
    {
        cout << "1.Массив типа int" << endl
            << "2.Массив типа double" << endl
            << "3.Массив типа char" << endl
            << "4.Выход" << endl;
        cin >> selection;
        switch (selection)
        {
        case 1:
            
            cout << "Вывод изначального массива:" << endl;
            FillArray(A, n);
            PrintArray(A, n);
            cout << "Функция - int* push_back(int*& pA, int& n, int tmp, int k)" << endl;
            cout << "Введите номер элемента, после которого хотите добавить элемент:";
            cin >> tmp;
            while (tmp<1 || tmp>n)
            {
                cout << "Ошибка! Ведите другой номер" << endl;
                cin >> tmp;
            }
            cout << "Введите элемент:";
            cin >> k;
            A = push_back(A, n, tmp, k);
            cout << "Вывод массива после преобразований" << endl;
            PrintArray(A, n);
            break;
        case 2:
            
            cout << "Вывод изначального массива:" << endl;
            FillArray(A2, m);
            PrintArray(A2, m);
            cout << "Функция - double* push_back(double*& pA, int& m, int tmp, double vesh)" << endl;
            cout << "Введите номер элемента, после которого хотите добавить элемент:";
            cin >> tmp;
            while (tmp<1 || tmp>m)
            {
                cout << "Ошибка! Ведите другой номер" << endl;
                cin >> tmp;
            }
            
            cout << "Введите элемент:";
            cin >> vesh;
            A2 = push_back(A2, m, tmp, vesh);
            cout << "Вывод массива после преобразований" << endl;
            PrintArray(A2, m);
            break;
        case 3:
            cout << "Введите строку из 10 символов:" << endl;
            FillArray(A3, b);
            cout << "Вывод изначального массива:" << endl;            
            PrintArray(A3, b);
            cout << "Функция - char* push_back(char*& pA, int& b, int tmp, char simv)" << endl;
            cout << "Введите номер элемента, после которого хотите добавить элемент:";
            cin >> tmp;
            while (tmp<1 || tmp>b)
            {
                cout << "Ошибка! Ведите другой номер" << endl;
                cin >> tmp;
            }
            cout << "Введите символ:";
            cin >> simv;
            A3 = push_back(A3, b, tmp, simv);
            cout << "Вывод массива после преобразований" << endl;
            PrintArray(A3, b);
            break;
        case 4:
            break;
        default:
            cout << "Error";
            break;
        }
    } while (selection != 4);
        return selection;
  
    delete[]A;
    delete[]A2;
    delete[]A3;
}