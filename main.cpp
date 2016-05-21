// 5.1.2 The STL Stack
// p.196

#include <stack>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	stack<int> myStack;

	cout << boolalpha;		// to show true/false instead of 1/0
	cout << "Stack empty = " << myStack.empty() << endl;
	cout << "Stack size = " << myStack.size() << endl << endl;
	// cout << "Stack top = " << myStack.top() << endl << endl;
	myStack.push(10);
	cout << "Stack empty = " << myStack.empty() << endl;
	cout << "Stack size = " << myStack.size() << endl;
	cout << "Stack top = " << myStack.top() << endl << endl;
	myStack.push(20);
	cout << "Stack empty = " << myStack.empty() << endl;
	cout << "Stack size = " << myStack.size() << endl;
	cout << "Stack top = " << myStack.top() << endl << endl;
	myStack.pop();
	cout << "Stack empty = " << myStack.empty() << endl;
	cout << "Stack size = " << myStack.size() << endl;
	cout << "Stack top = " << myStack.top() << endl;

	return EXIT_SUCCESS;
}
