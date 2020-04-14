//Трегубов Максим, лаб. №10, рекурсия
#include <iostream>
 
int get_count(int n, int prev = 0) 
{
    if(n != 0)
        return prev ? get_count(n - 1, 0) : get_count(n - 1, 0) + get_count(n - 1, 1);   
    else 
        return 1;
}
 
int main()
{
    std::cout << get_count(3);
}
