#pragma once
#include<stdio.h>
#include<iostream>
#include<string>
#include "clsMyStack.h"
#include "clsDblLinkedList.h"
#include "ClsMyQueue.h"
#include <cstdlib>
using namespace std;
template< class T>
class clsDynamicArray {
protected:
	int _size=0;
	clsDblLinkedList<T>_MyList;

public:
	T* array;
	T* TempArray;
	clsDynamicArray() {};
	clsDynamicArray(int size) {
		if (_size < 0)
			 size = 0;
		
			
		_size = size;
		array = new T[_size];
	}
	~clsDynamicArray() {
		delete[]array;
	}
	bool setItem(int index, T value) {
		
		if (index >= _size || _size < 0) {
			return false;
	   }
		array[index] = value;
		return true;
		
	}
	void printList() {
		for (int i = 0; i < _size; i++) {
			cout << array[i] << " ";
		}
	}
	bool isEmpty() {
		return _size == 0 ? true : false;
	}
	int size() {
		return _size;
	}
	void resize(int Newsize) {
		if (Newsize < 0) {
			Newsize = 0;
		}
		if (Newsize < _size) {
			_size = Newsize;
		}
		TempArray = new T[_size];
		for (int i = 0; i < _size; i++) {
			TempArray[i] = array[i];
		}
		_size = Newsize;
		delete[]array;
		array = TempArray;
	}
	T GetItem(int index) {
		return array[index];
	}
	void reverse() {
		TempArray = new T[_size];
		for (int i = 0; i < _size; i++) {
			TempArray[i] = array[_size - i - 1];

			 }
		delete[]array;
		array = TempArray;
	}
	void clear() {
	
		_size = 0;
		TempArray = new T[0];
		delete[]array;
		array = TempArray;
	}
	bool deletItemAT(int index) {
		if (index > _size || _size < 0) {
			return false;
		}
		_size--;
		TempArray = new T[_size];
		for (int i = 0; i < index; i++) {
			TempArray[i] = array[i];
		}
		for (int i = index + 1; i < _size + 1; i++) {
			TempArray[i - 1] = array[i];
		}
		delete[]array;
		array = TempArray;
		return true;
		
	}
	void DeletFirsteItem() {
		deletItemAT(0);

	}
	void DeletLastItem() {
		deletItemAT(_size - 1);
		
	}
	int find(T value) {
		int index = -1;
		for (int i = 0; i < _size; i++) {
			if (array[i] == value) {
				index = i;
				break;
			}
			
		}
		return index;
	}
	
	bool deletItem(T value) {
		int index = 0;
		index = find(value);
		if (index == -1) {
			return false;
		}
		deletItemAT(index);
		return true;
	}
	bool insertAT(int index, T value) {
		
		
		if (index > _size || index < 0) {
			return false;
		}
		_size++;
		TempArray = new T[_size];
		for (int i = 0; i < index; i++) {
			TempArray[i] = array[i];
		}
	
		
			TempArray[index] = value;
			
			for (int i = index+1 ; i < _size; i++) {
				TempArray[i] = array[i-1];
				}
				

			
			
			
			
		
		delete[]array;
		array = TempArray;
		return true;
	}
	void insertATbeginning(T value) {
		
		insertAT(0, value);

	}
	bool insertBefore(int index, T value) {
		if (index < 1) {
			return insertAT(0, value);
			
		}
		else {

		 return	insertAT(index - 1, value);
		}
	}
	bool insertAfter(int index, T value) {
		if (index >= _size) {
		return 	insertAT(_size - 1, value);
		}
		else {
			return insertAT(index + 1, value);
		}
	}
	void insertATEnd(T value) {
		insertAT(_size, value);

	}
	void UpdateItem(int index, T value) {
		array[index] = value;
	}
	
	
};
