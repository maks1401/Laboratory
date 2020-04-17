// �������� ������, ���.27, ���������� ������ � ����� � �������������� �������
#include "Pair.h"
#include "file.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
setlocale(LC_ALL, "ru");
Pair p,p1,p2;
int k, selection;
char file_name[30];
do
{
	cout << "1.������� ����" << endl
		<< "2.������� ����" << endl
		<< "3.������� ��� ������ ������ ��������� ��������" << endl
		<< "4.�������� ������� ����� �������� � �������� ���������."<<endl
		<< "5.��������� ��� ������ � �������� ��������� �� ����� "<<endl
		<< "6.�����" << endl;

	cin >> selection;
	switch (selection)
	{
	case 1:
		cout << "��� �����: "; cin >> file_name;
		k = make_file(file_name);
		if (k < 0) cout << "������"<<endl;
		break;
	case 2:
		cout << "��� �����: "; cin >> file_name;
		k = print_file(file_name);
		if (k == 0) cout << "������ ����"<<endl;
		if (k < 0)cout << "������" << endl;
		break;
	case 3:
		cout << "��� �����: "; cin >> file_name;
		int value; cout << "������� �������� ��������, ������� ������ �������: "; cin >> value;
		k = del_file(file_name, value);
		if (k < 0) cout << "������"<<endl;
		if (k == 0) cout << "������ ����" << endl;
		break;
	case 4:
		int number, amount, N;
		cout << "��� �����: "; cin >> file_name;
		cout << "������� �������� ��������, ����� �������� ������ �������� ��������:"; cin >> number;
		k = add_file(file_name, number);
		if (k < 0) cout << "������" << endl;;
		if (k == 0)cout << "������" << endl;
		break;
	case 5:
		cout << "��� �����: "; cin >> file_name;
		cout << "�������� first:"; cin >> number;
		k = change_file(file_name, number);
		if (k < 0) cout << "������"<<endl;
		if (k == 0) cout << "������ �� �������"<<endl;
		break;
	}
} while (selection != 6);
return selection;
}