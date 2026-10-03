#pragma once

#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
 template<class T>
class clsMyQueue {
protected:
	clsDblLinkedList<T>_MyList;
	
public:
	
	
	void push(T value) {
		
		_MyList.insertATend(value);
	}

	void print() {
		
		_MyList.printLinkedList();
		}

	
	int size() {
		return _MyList.size();
	}
	T front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(size()-1);
	}
	void pop() {
		_MyList.DeletFirsteNode();
	}
	bool isEmpty() {
		return _MyList.isEmpty();
	}
	T GetItem(int index) {
		return _MyList.GetItem(index);
	}
	void Reverse() {
		_MyList.reverse();
	}
	void updateItem(int index, T value) {
		_MyList.updateItem(index, value);
	}
	void insertAfter(int index, T value) {
		_MyList.insertAfterIndex(index, value);
	}
	void insertAtFront(T value) {
		_MyList.insertAtBeginning(value);
	}
	void insertAback(T value) {
		_MyList.insertATend(value);
	}
	void clear() {
		_MyList.clear();
	}
};