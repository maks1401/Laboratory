//Трегбов Максим, лаб. №5, одномерный массив
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <>
using namespace std;
int* f(int n)
{
	int*a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 101 - 50;
	}
	return a;
}
void f2(int* b, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
int *f3(int *b,int s,int n)
{

	int* c = new int[n+s];
	for (int i=0; i<n; i++)
	{
		c[i+s]=b[i];
		for(int j=0; j<s; j++)
		{
			c[j]=rand() % 101 - 50;
		}
	}
	return c;
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int k,s,n;
	int *b;
	cout << "Введите длину массива:";
	cin >> n;
	do
	{
		cout << "1.Формирование массива\n" << "2.Печать массива\n" << "3.Добавление в массив\n" << "4.Выход\n";
		cin >> k;
		switch (k)
		{
		case 1:
		b = f(n); 
		break;

		case 2:
		f2(b,n); 
		break;

		case 3:
		cout << "Введите количество элементов, которое вы хотите добавить в начало массива:";
		cin >> s;
		b = f3(b,s,n);
		n=s+n;
		break;
		}
	} 
	while (k != 4);
	system ("pause");
}