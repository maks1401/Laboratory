
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	int a[100];
	int n;
	bool r = true;
	cout <<"������ ����� ���ᨢ�:";
	cin >> n;
	cout <<"������ ������ ���ᨢ�:"<<"\n";
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
		cout << "���ᨢ �� 㯮�冷祭 �� �����⠭��";
	}
	else
	{
		cout << "���ᨢ 㯮�冷祭 �� �����⠭��";
	}
	cout<<"\n";
	system("pause");
}