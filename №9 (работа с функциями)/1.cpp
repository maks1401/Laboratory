//�������� ������, ���. �9, 1 �������
#include <iostream> 
#include <string.h> 
#include <locale.h> 
using namespace std;
void f1(const char* name = "������", const char* soname = "��������", int age = 19) 
{
	cout <<  " " << name << " " << soname << " " << age << endl; 
} 
int main() 
{ 
	setlocale(LC_ALL, "RUS"); 
	f1(); 
	f1("������");
	f1("������","�������");
	f1("������","�������",18); 
	system("pause");
	return 0; 
}