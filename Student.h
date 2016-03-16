#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
	friend ostream & operator<< (ostream& , const Student& );
public:
	Student(){}
	Student( string , string );
	//~Student();
	void setScore(int,int);
	void setNumber(string);
	void setName(string);
private:
	string name;
	string number;
	int score[3];
	int quiz[3];
};
#endif