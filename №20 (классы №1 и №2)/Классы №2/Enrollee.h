#include <iostream>
#include <string>

using namespace std;

class Enrollee
{
private:
	string name;
	string specialty;
	int exams;
	
public:
	~Enrollee();

	Enrollee(const Enrollee&);

	Enrollee(string f, string s, int b);

	Enrollee();


	void setname(string);

	string getname();

	void setspecialty(string);

	string getspecialty();

	void setexams(int);
	
	int getexams();

	void show();

};