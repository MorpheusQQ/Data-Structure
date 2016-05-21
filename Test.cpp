// 5.1.5 A Stack Implementation with a Singly Linked List
// pp.198-201

#include <cstdlib>
#include <iostream>
#include "LinkedStack.h"

using namespace std;

int main() {
	LinkedStack B = LinkedStack();			// B = [ ], size = 0
	B.push("Bob");							// B = [Bob*], size = 1
	B.push("Alice");						// B = [Bob, Alice*], size = 2
	cout << B.top() << endl; B.pop();		// B = [Bob*], outputs: Alice
	B.push("Eve");							// B = [Bob, Eve*], size = 2
	cout << B.top() << endl; B.pop();		// B = [Bob*], outputs: Alice
	cout << B.top() << endl; B.pop();		// B = [Bob*], outputs: Alice

	return EXIT_SUCCESS;
}
