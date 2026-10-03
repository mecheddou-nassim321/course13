#pragma once
#include<stdio.h>
#include<iostream>
#include "clsDynamicArray.h"
using namespace std;
template<class T>
class clsMystackArr :public clsDynamicArray<T> {
public:
	int index = 0;
	void push(T value) {
		clsDynamicArray<T>::insertATbeginning(value);
		index++;
	}
	T Top() {
		return	clsDynamicArray<T>::GetItem(0);
	}
	T Bottom() {
		return clsDynamicArray<T>::GetItem(index - 1);
	}
	void pop() {
		clsDynamicArray<T>::DeletFirsteItem();
	}
	void insertATfront(T value) {
		clsDynamicArray<T>::insertATbeginning(value);
	}
	void insertATback(T value) {
		clsDynamicArray<T>::insertATEnd(value);
	}
};
