//�������� ������, ���. �4, ��������
#include <iostream>
#include<iomanip> 
using namespace std; 
int main() 
{ 
	setlocale(LC_ALL, "Russian"); 
	int n, i; 
	cout << "������ ������⢮ ����⮢ � ���ᨢ�:"; 
	cin >> n; 
	cout << "������ ������:" <<"\n"; 
	void** pm = new void* [2]; 
	pm[0] = new int[n]; 
	pm[1] = new float[n]; 
	for (i = 0;i < n;i++) 
	{ 
		cin >> ((int*)pm[0])[i] >> ((float*)pm[1])[i]; 
	} 
	for (i = 0;i < n;i++) 
	{ 
		cout << setw(5) << ((int*)pm[0])[i] << '\t' << ((float*)pm[1])[i] <<"\n"; 
	} 
	cout<<"\n";
	system("pause");
}