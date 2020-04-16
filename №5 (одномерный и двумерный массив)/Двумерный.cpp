//Трегубов Максим, лаб. №5, двумерный массив
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int** f(int n, int m)
{
	int** arr;
	arr = new int* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 101 - 50;
		}
	}
	return arr;
}
int** f2(int **arr,int k1, int k2, int n, int m)
{
	int** arr2;
	int s=0;
	arr2 = new int* [m - ((k2 - k1) + 1)];
	for (int i = 0; i < m - ((k2 - k1) + 1); i++)
	{
		arr2[i] = new int[n];
	}
	for (int i = 0; i < k1 - 1; i++)
	{
		s++;
		for (int j = 0; j < n; j++)
		{
			arr2[i][j] = arr[i][j];
		}
	}
	for (int i = k2; i < k2 + (m - k2); i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr2[s + i - k2][j] = arr[i][j];
		}
	}
	return arr2;
}
void print(int** arr, int n, int m)
{
	for (int i = 0; i < m ;i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m, n, ** b, k;
	cout << "Введите количество строк:";
	cin >> m;
	cout << "Введите количество стобцов:";
	cin >> n;
	do

	{
		cout << "1.Формирование массива\n" << "2.Печать массива\n" << "3.Удаление строк из массива\n" << "4.Выход\n";
		cin >> k;
		switch (k)
		{
		case 1:
			b = f(n, m);
			break;

		case 2:
			print(b, n, m);
			break;

		case 3:
			int k1, k2, s = 0;
			cout << "Выберите диапазон строк, которые хотите удалить:" << "\n";
			cout << "k1:";
			cin >> k1;
			cout << "k2:";
			cin >> k2;
			b= f2 (b,k1,k2,n,m);
			m=m - ((k2 - k1) + 1);
			break;
		}
	} while (k != 4);
	system("pause");
}