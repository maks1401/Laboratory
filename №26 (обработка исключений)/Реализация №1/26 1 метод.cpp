//�������� ������, ���. �26, ��������� ���������� - 1 ������� ����������
//����� - ��������� ������ � ���������� ���� int.
//����������� �������� :
//[] � ������� �� �������;
//+������ � ���������� ������ b � ������ a(a + b)
//+ ����� � ��������� ������� � ������ ������;
#include "set_2.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try
    {
        set_2 a(5);
        
		set_2 c(5);
		cout << "������� �������� ������ 'a': " << endl;
        cin >> a;
		cout << "C����� 'a': " << a;
        cout << "������� ������ ��������, ������� ������ �������: ";
        int i;
        cin >> i;
        cout << "��� �������: " << a[i] << endl;
		
		int s;
		cout << "������� ����� ������ 'b': ";
		cin >> s;
		set_2 b(s);
		cout << "������� �������� ������ 'b': " << endl;
		cin >> b;

		cout << "C����� 'b': "<< b;
		c = a + b;
		cout << "����� ������ 'c = a + b': " << c;
		cout << "������� �������, ������� ������ �������� � ������ ������: ";
		cin >> i;
		c + i;
		cout << "C����� '�': " << c;
    }
    catch (const char* p)
    {
		cout << "������ ���������� const char*. ���������� - " << p << endl;
		return -1;
    }
	
    return 0;
}