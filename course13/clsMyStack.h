#pragma once
#include<iostream>
#include "ClsMyQueue.h"
#include "clsDblLinkedList.h"
using namespace std;
template<class T>
class clsMyStack:public clsMyQueue<T>{

public:
	void push(T value) {
		clsMyQueue <T>::_MyList.insertAtBeginning(value);
		
	}
	T top() {
		return clsMyQueue <T>::front();
	}
	T Bottom() {
		return clsMyQueue <T>::Back();
	}
};
