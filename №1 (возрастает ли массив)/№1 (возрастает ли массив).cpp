
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	int a[100];
	int n;
	bool r = true;
	cout <<"Введите длину массива:";
	cin >> n;
	cout <<"Введите элементы массива:"<<"\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int i=0;
	while (r == true && i < n - 1)
	{
		if (a[i]>=a[i + 1])
		{
			r = false;
		}
		else
		{
			i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	if (r == false)
	{
		cout << "Массив не упорядочен по возрастанию";
	}
	else
	{
		cout << "Массив упорядочен по возрастанию";
	}
	cout<<"\n";
	system("pause");
}