//Трегубов Максим, лаб. №3, перевод строки в число
#include <iostream>
using namespace std;
int main()
{
 long long int n;
 char*ptn=(char*)&n;
 for(int i=0;i<8;i++)
 {
 	cin>>*(ptn+i);
 }
 cout <<n<< "\n";
 system("pause");
}