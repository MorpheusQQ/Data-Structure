#include <cstdlib>
#include <iostream>
#include "Student.h"

using namespace std;

void testStudent();

int main() {
	testStudent();
	system( "pause" );
	return EXIT_SUCCESS;
}

void testStudent() {
	Student student0("�֥d�C", "1001230");
	Student student1 = student0;
	Student student2;
	student2 = student0;

	student0.setScore(0, 70);
	student0.setScore(1, 80);
	student0.setScore(2, 90);

	student1.setName("�p��");
	student1.setNumber("1001231");
	student1.setScore(0, 71);
	student1.setScore(1, 81);
	student1.setScore(2, 91);

	student2.setName("�p��");
	student2.setNumber("1001232");
	student2.setScore(0, 72);
	student2.setScore(1, 82);
	student2.setScore(2, 92);

	cout << student0 << endl;
	cout << student1 << endl;
	cout << student2 << endl;
}

/*
Output should be:
Name = �֥d�C
Number = 1001230
Quiz 0 = 70
Quiz 1 = 80
Quiz 2 = 90

Name = �p��
Number = 1001231
Quiz 0 = 71
Quiz 1 = 81
Quiz 2 = 91

Name = �p��
Number = 1001232
Quiz 0 = 72
Quiz 1 = 82
Quiz 2 = 92
*/