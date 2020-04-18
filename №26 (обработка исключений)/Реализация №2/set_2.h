#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 20;
class set_2
{
    int size;
    int* beg;
public:
    set_2() { size = 0; beg = 0; }
    set_2(int s);
    set_2(int s, int* mas);
    set_2(const set_2& v);
    ~set_2();	
    const set_2& operator=(const set_2& v);
	const set_2& operator+(const set_2& v);
	set_2 operator+(int k);
    int operator[](int i);
    friend bool operator==(const set_2& s1, const set_2& s2);
    set_2 operator-(int q);
    set_2 operator>(int k);
    friend ostream& operator<<(ostream& out, const set_2& v);
    friend istream& operator>>(istream& in, const set_2& v);
};
