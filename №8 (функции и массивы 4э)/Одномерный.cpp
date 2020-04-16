//Трегубов Максим, лаб. №8, функции и массивы одномерный
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int *mass(int n)
{
	int* a = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 101 - 50;
	}
	return a;
}
void out(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int* s(int *a, int n)
{
	int tmp;
	for (int i = 1; i <= (n/2); i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j - 2] > a[j])
			{
				tmp = a[j];
				a[j] = a[j - 2];
				a[j - 2] = tmp;
			}
			j--;
		}
	}
	return 0;
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n, * a;
	cout << "Введите длину массива:";
	cin >> n;
	a = mass(n);
	out(a, n);
	s(a, n);
	out(a, n);
	system ("pause");
}

