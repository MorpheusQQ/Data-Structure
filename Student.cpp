#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

Student::Student(string a, string b)
{
	name = a;
	number = b;
}
void Student::setName(string a)
{
	name = a;
}
void Student::setNumber(string a)
{
	number = a;
}
void Student::setScore(int a, int b)
{
	quiz[a] = a;
	score[a] = b;
}
ostream &operator<<(ostream &output, const Student &s)
{
	output << "Name " << " = " << s.name << endl;
	output << "Number " << " = " << s.number << endl;
	for (int i = 0; i < 3; i++)
	{
		output << "Quiz " << s.quiz[i] << " = " << s.score[i] << endl;
	}
	return output;
}