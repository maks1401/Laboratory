//Трегубов Максим, лаб. №28, задача №1
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
 void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	vector<double> v;	
	int lenght;
	cout << "Введите длину вектора: ";
	cin >> lenght;
	for (int i = 0; i < lenght; i++)
		v.push_back(((double)rand() /1000));
	cout << "Векор:" << endl;
	for (vector<double>::iterator i = v.begin(); i != v.end(); i++)
		cout <<  *i << "   ";
	double max;
	max = *v.begin();
	for (vector<double>::iterator i = v.begin(); i != v.end(); i++)
		if (max < *i)
			max = *i;	
	cout << endl << "Максимальный элемент вектора: "<< max<<endl;	
	vector<double>::iterator vv = v.begin();
	cout << "Введите индекс, на который хотите добавить максмиальное значение: ";
	int p;
	cin >> p;
	if (p > v.size())
		cout << "Вы привысили длину вектора" <<endl;
	else
	{		
		for (int j = 0; j < p; j++)
			vv++;
		v.insert(vv, max);	
	}
	cout << "Векор:" << endl;
	for (vector<double>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << "   ";
	double sm=0;
	for (vector<double>::iterator i = v.begin(); i != v.end(); i++)
		sm += *i;
	double  armean = sm / v.size();
	cout << endl << "Среднее арифмитическое вектора: " << armean <<endl;		
	vector<double> vec;
	for (vector<double>::iterator i = v.begin(); i != v.end(); i++)
		if (*i < armean)
			vec.push_back(*i);	
	cout << "Вектор после удаления всех элементов больше среднего арифмитического:" << endl;
	for (vector<double>::iterator i = vec.begin(); i != vec.end(); i++)
		cout << *i << "   ";
	cout << endl;
	for (vector<double>::iterator i = vec.begin(); i != vec.end(); i++)
		*i = *i*max;
	cout << "Вектор после умножение на максимальный элемент:" << endl;
	for (vector<double>::iterator i = vec.begin(); i != vec.end(); i++)
		cout << *i << "   ";	
}