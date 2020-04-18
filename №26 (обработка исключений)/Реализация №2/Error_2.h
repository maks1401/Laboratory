#pragma once
#include <string>
#include <iostream>
using namespace std;

class error //класс ошибка
{
protected:
    string str;
public:
    //конструктор, инициирует атрибут str сообщением об ошибке error(string s){str=s;}
    void what(); //выводит значение атрибута str
    error(void);
    error(string);
};