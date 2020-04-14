//Трегубов Максим, лаб. № 13, строки
#include <iostream>
#include<string>

using namespace std;
string del(string str)
{
	int letters = 0, end, start, n;
	letters = str.length();
	unsigned char vowels[6] = { 'a','e','o','i','y','u' };
	char space = ' ';
	for (int i = 0; i < letters; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if ((str[i] == vowels[j]) and (str[i - 1] == space))
			{
				start = i-1;
				while (!(str[i + 1] == space) or (i == letters-1))
				{
					if (i != letters-1)
					{
						i++;
					}
					else
					{
						break;
					}
				}
				end = i;
				n = end - start+1;
				i = i - n+1;
				for (int u = 0; u < n; u++)
				{
					for (int t = start; t < letters; t++)
					{
						str[t] = str[t + 1];
					}
				}	
			}
		}
	}
	return str;
}
int main()
{
	string str;
	getline(cin, str);
	cout << del(str);
}