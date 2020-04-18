#include "set_2.h"
#include <iostream>

using namespace std;

set_2::set_2(int s)
{
    if (s > MAX_SIZE) throw "Множество элементов больше максимума\n"; size = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = 0;
}
set_2::set_2(const set_2& v)
{
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}
set_2::~set_2()
{
    if (beg != 0) delete[]beg;
}
set_2::set_2(int s, int* mas)
{
    if (s > MAX_SIZE) throw "Множество элементов больше максимума\n"; size = s;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = mas[i];
}
const set_2& set_2::operator =(const set_2& v)
{
    if (this == &v)return *this;
    if (beg != 0) delete[]beg;
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
    return*this;
}
const set_2& set_2::operator+(const set_2& v)
{	
	for (int i = 0; i < size; i++)
		beg[i] = v.beg[i]+beg[i];
	return*this;
}
set_2 set_2::operator+(int k)
{
	int *arr = new int[size + 1];
	for (int i = 0; i < size; i++)
		arr[i+1] = beg[i];
	arr[0] = k;
	size++;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i]=arr[i];	
	return*this;
}

ostream& operator<<(ostream& out, const set_2& v)
{
    if (v.size == 0) out << "Пустое\n";
    else
    {
        for (int i = 0; i < v.size; i++)
            out << v.beg[i] << " ";
        out << endl;
    }
    return out;
}
istream& operator >>(istream& in, const set_2& v)
{
	{
		for (int i = 0; i < v.size; i++)
			in >> v.beg[i];
	}
	return in;
}
int set_2::operator [](int i)
{
    if (i < 0) throw "Индекст меньше 0 ";
    if (i >= size) throw "Индекс больше количества элементов в множестве "; return beg[i];
}
bool operator==(const set_2& s1, const set_2& s2)
{
    return s1.size == s2.size;

}
set_2 set_2::operator -(int q)
{
    if (size == 0) throw "Множество пустое";
    if (size == 1)
    {
        size = 0;
        delete[]beg;
        beg = 0;
        return *this;
    };
    for (int i = 0; i < q; i++) {
        set_2 temp(size, beg);
        delete[]beg;
        size--;
        beg = new int[size];
        for (int i = 0; i < size; i++)
            beg[i] = temp.beg[i];
    }
    return*this;
}
set_2 set_2::operator>(int k)
{
    if (size == 0) throw "Множество пустое";
    else {
        for (int i = 0; i < size; i++)
            if (k == beg[i])
                cout << "Элемент найден\n ";
    }
    return *this;
}
