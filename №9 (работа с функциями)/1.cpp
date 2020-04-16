//Трегубов Максим, лаб. №9, 1 столбик
#include <iostream> 
#include <string.h> 
#include <locale.h> 
using namespace std;
void f1(const char* name = "Максим", const char* soname = "Трегубов", int age = 19) 
{
	cout <<  " " << name << " " << soname << " " << age << endl; 
} 
int main() 
{ 
	setlocale(LC_ALL, "RUS"); 
	f1(); 
	f1("Андрей");
	f1("Андрей","Новиков");
	f1("Андрей","Новиков",18); 
	system("pause");
	return 0; 
}