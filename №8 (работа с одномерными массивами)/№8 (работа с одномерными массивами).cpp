//╥Ёхусют ╠ръёшь, ырс. ╣8, ЁрсюЄр ё юфэюьхЁэ√ьш ьрёёштрьш
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n, min;
	cout << "Введите длину массива:";
	cin >> n;
	int* a = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 101 - 50;
		cout << a[i] << " ";
	}
	cout << "\n";
	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "Min:" << min;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == min)
		{
			a[i] = a[i + 1];
			for (int j = i + 1; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
		}
	}
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	cout << "Сумма всех элементов массива:" << sum << "\n";
	int m = sum / n;
	cout << "Среднее арифмитическое:"<< m;
	cout << "\n";
	for (int j = 0; j < 3; j++)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			a[i + 1] = a[i];
		}
		n++;
		a[j] = m;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	system("pause");
}