//�������� ������, ���. �9, 3 �������
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
        cout << "1.������ ���� int" << endl
            << "2.������ ���� double" << endl
            << "3.������ ���� char" << endl
            << "4.�����" << endl;
        cin >> selection;
        switch (selection)
        {
        case 1:
            
            cout << "����� ������������ �������:" << endl;
            FillArray(A, n);
            PrintArray(A, n);
            cout << "������� - int* push_back(int*& pA, int& n, int tmp, int k)" << endl;
            cout << "������� ����� ��������, ����� �������� ������ �������� �������:";
            cin >> tmp;
            while (tmp<1 || tmp>n)
            {
                cout << "������! ������ ������ �����" << endl;
                cin >> tmp;
            }
            cout << "������� �������:";
            cin >> k;
            A = push_back(A, n, tmp, k);
            cout << "����� ������� ����� ��������������" << endl;
            PrintArray(A, n);
            break;
        case 2:
            
            cout << "����� ������������ �������:" << endl;
            FillArray(A2, m);
            PrintArray(A2, m);
            cout << "������� - double* push_back(double*& pA, int& m, int tmp, double vesh)" << endl;
            cout << "������� ����� ��������, ����� �������� ������ �������� �������:";
            cin >> tmp;
            while (tmp<1 || tmp>m)
            {
                cout << "������! ������ ������ �����" << endl;
                cin >> tmp;
            }
            
            cout << "������� �������:";
            cin >> vesh;
            A2 = push_back(A2, m, tmp, vesh);
            cout << "����� ������� ����� ��������������" << endl;
            PrintArray(A2, m);
            break;
        case 3:
            cout << "������� ������ �� 10 ��������:" << endl;
            FillArray(A3, b);
            cout << "����� ������������ �������:" << endl;            
            PrintArray(A3, b);
            cout << "������� - char* push_back(char*& pA, int& b, int tmp, char simv)" << endl;
            cout << "������� ����� ��������, ����� �������� ������ �������� �������:";
            cin >> tmp;
            while (tmp<1 || tmp>b)
            {
                cout << "������! ������ ������ �����" << endl;
                cin >> tmp;
            }
            cout << "������� ������:";
            cin >> simv;
            A3 = push_back(A3, b, tmp, simv);
            cout << "����� ������� ����� ��������������" << endl;
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