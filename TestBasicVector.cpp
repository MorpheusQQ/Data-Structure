#include <iostream>
#include <cstdlib>
#include <string>
#include "BasicVector.h"


using namespace std;

int main(){

	BasicVector<int> iv(5); // vector of 5 integers
	BasicVector<double> dv(20); // vector of 20 doubles
	BasicVector<string> sv(10); // vector of 10 strings

	iv[3] = 8;
	dv[14] = 2.5;
	sv[7] = "hello";	cout << iv[3] << "\n" << endl;	cout << dv[14] << "\n" << endl;	cout << sv[7] << "\n" << endl;

	system("pause");


	return EXIT_SUCCESS;

}