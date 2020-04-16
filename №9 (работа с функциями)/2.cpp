//Трегубов Максим, лаб. №9, 2 столбик
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
void f1(int one, ...) {
	int* z = &one;
	int d = *z;  
	int next = *(z + 1);
	int max = 0;
	int k=0;
	while (*z != 0) {
		
		if (next%2==0) {
			k++;
		}
		cout << d << " ";
		d = *(++z);
		next = *(z + 1);
	}

	cout << "Количество четных элементов:" << k << endl;
}
int main ()
{
	f1(2, 5, 7, 3, 0);
	f1(8, 6, 23, 1, 5, 4, 0);
	system("pause");
}