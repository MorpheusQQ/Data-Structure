#ifndef BASIC_VECTOR_H
#define BASIC_VECTOR_H


template <typename T>

class BasicVector { // a simple vector class
public:


	BasicVector<T>::BasicVector(int capac) {
		capacity = capac;
		a = new T[capacity]; // allocate array storage
	}// constructor

	T& operator[ ](int i) { return a[i]; }

private:

	T* a; // array storing the elements
	int capacity; // length of array a
};
#endif