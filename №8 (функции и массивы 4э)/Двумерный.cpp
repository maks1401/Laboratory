//�������� ������, ���. �8, ������� � �������, ���������
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int m, n,tmp;
	cout << "������� ���������� �����:";
	cin >> m;
	cout << "������� ���������� ��������";
	cin >> n;
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
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n/2; j++)
		{
			tmp = arr[i][j];
			arr[i][j] = arr[i][(n-1)-j];
			arr[i][(n - 1)-j] = tmp;
		}
		i++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	system("pause");



}

	