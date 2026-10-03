#pragma once
#include<stdio.h>
#include<iostream>
#include<string>
#include "clsMyStack.h"
#include<stack>

using namespace std;

class clsMyString {
private:
	string _value;
	stack<string>_undo;
	stack<string>_redo;
	
public:

	void setValue(string value) {
		_undo.push(_value);
		_value = value;
	
		
		
	}
	string getValue() {
		
		return _value;
	}
	__declspec(property(get = getValue, put = setValue))string value;
	void undo() {
		
		//_MyStack2.push(_value);
		if (!_undo.empty()) {
			_redo.push(_value);
			_value = _undo.top();
			_undo.pop();
		}
		
		

		//_MyStack.push(prev_Value);
	}
	void Redo() {
		if (!_redo.empty()) {
			_undo.push(_value);
			_value = _redo.top();
			_redo.pop();
		}
		
		}


};
