//�������� ������, ���. �2, ����� ������ ������ ��������� ��������� -1
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[100];
	int n;
	bool r = false;
	cout <<"������ ����� ���ᨢ�:";
	cin >> n;
	cout <<"������ ������ ���ᨢ�:"<<"\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
		{
			n++;
			int j = n - 2;
			while (j >= i)
			{
				a[j + 1] = a[j];
				j--;
			}
			a[i] = -1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout<<"\n";
	system("pause");
}