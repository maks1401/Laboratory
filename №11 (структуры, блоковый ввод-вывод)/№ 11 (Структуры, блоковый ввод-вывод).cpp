//Трегубов Максим, лаб. №11, структуры, блоковый ввод-вывод
#include <iostream>
#include <fstream>
#include <string>
#include<iomanip> 
#include<Windows.h>
using namespace std;

struct sport_team
{
	string name;
	string city;
	int players;
	int score;

};

int init()
{
	sport_team* Arrayteams = new sport_team[3];
	Arrayteams[0].name = "Амкар";
	Arrayteams[0].city = "Пермь";
	Arrayteams[0].players = 20;
	Arrayteams[0].score = 30;

	Arrayteams[1].name = "Зенит";
	Arrayteams[1].city = "Санкт-Петербург";
	Arrayteams[1].players = 17;
	Arrayteams[1].score = 13;

	Arrayteams[2].name = "Союз";
	Arrayteams[2].city = "Москва";
	Arrayteams[2].players = 23;
	Arrayteams[2].score = 24;
	
	ofstream fout("s.txt", ios::binary | ios::out);
	if (fout.is_open())
	{
		for (int i = 0; i < 3; i++)
		{
			fout.write((char*)& Arrayteams[i], sizeof(sport_team));
		}			
		fout.close();  
	}
	else
	{
		cout << "Error";
	}
	return 3;
}

void print(int i)
{
	sport_team* Arrayteams = new sport_team[i];
	ifstream fin("s.txt", ios::binary | ios::in);
	if (fin.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			fin.read((char*)& Arrayteams[j], sizeof(sport_team));
		}
		fin.close();
	}
	cout << endl;
	for (int j = 0; j < i; j++)
	{
		cout << Arrayteams[j].name << '\t';
		cout << left << setw(15) << Arrayteams[j].city << '\t';
		cout << Arrayteams[j].players << '\t';
		cout << Arrayteams[j].score << endl;
	}
	cout << endl;
}

int del (int i)
{
	int sc, h = 0;
	cout << "Введите кол-во очков, команды набравшие меньшее кол-во очков, будут удалены:";
	cin >> sc;	
	sport_team* Arrayteams = new sport_team[i];
	ifstream fin("s.txt", ios::binary | ios::in);
	if (fin.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			fin.read((char*)& Arrayteams[j], sizeof(sport_team));
		}			
		fin.close();
	}
	cout << sc <<endl;
	for (int j = 0; j < i; j++)
	{
		if (Arrayteams[j].score < sc)
		{
			
			for (int s = j; s < i-1; s++)
			{
				Arrayteams[s] = Arrayteams[s + 1];
			}
			i--;
			j--;
		}
	}	
	ofstream fout("s.txt", ios::binary | ios::out);
	if (fout.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			fout.write((char*)& Arrayteams[j], sizeof(sport_team));
		}
		fout.close();
	}
	else
	{
		cout << "Error";
	}
	return i;
}

int incl(int i)
{
	sport_team* Arrayteams1 = new sport_team[i+2];
	sport_team* Arrayteams = new sport_team[i];
	ifstream fin("s.txt", ios::binary | ios::in);
	if (fin.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			fin.read((char*)& Arrayteams[j], sizeof(sport_team));
		}
		fin.close();
	}	
	for (int j = 0; j < i; j++)
	{
		Arrayteams1[j + 2] = Arrayteams[j];
	}
	for (int j = 0; j < 2; j++)
	{
		cout << "Введите навазние команды:";
		cin >> Arrayteams1[j].name;
		cout << "Введите город команды:";
		cin >> Arrayteams1[j].city;
		cout << "Введите кол-во игроков:";
		cin >> Arrayteams1[j].players;
		cout << "Введите кол-во очков:";
		cin >> Arrayteams1[j].score;
	}
	i = i + 2;
	ofstream fout("s.txt", ios::binary | ios::out);	
	if (fout.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			fout.write((char*)& Arrayteams1[j], sizeof(sport_team));
		}
		fout.close();
	}	
	return i;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int k,i;	
	do
	{
		cout << "1. Формирование списка команд\n" << "2. Вывод списка команд\n" << "3. Удалние из списка команд\n" << "4. Добавление двух команд в начало списка\n" << "5. Выход\n";
		cin >> k;
		switch (k)
		{
		case 1:
			i = init();
			break;
		case 2:
			print(i);
			break;
		case 3:
			i = del(i);
			break;
		case 4:
			i = incl(i);
			break;
		}

	} while (k != 5);
}