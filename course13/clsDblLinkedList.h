#pragma once
#include<iostream>
#include<stdio.h>
using namespace std;
template<class T>
class clsDblLinkedList {
protected:
	int _size = 0;
public:
	class Node {
	public:
		T value;
		Node* Next;
		Node* prev;

	};
	Node* head = NULL;
	

	void insertAtBeginning(T value) {
		Node* newNode = new Node();
		newNode->value = value;
		newNode->Next = head;
		newNode->prev = NULL;
		if (head != NULL) {
			head->prev = newNode;
		}
		head = newNode;
		_size++;
	}
	void printLinkedList() {
		Node* current = head;
		while (current != NULL) {
			cout << current->value << " <-";
			current = current->Next;
		}
	}

	Node* Find(T value) {
		Node* current = head;
		while (current != NULL) {
			if (current->value == value) {
				return current;
			}
			current = current->Next;
		}
		return NULL;
	}
	void insertAfter(Node* current, T value) {
		Node* newNode = new Node();
		newNode->value = value;
		if (head == NULL) {
			head = newNode;
			newNode->prev = NULL;

		}
		newNode->Next = current->Next;
		current->Next = newNode;
		if (current->Next != NULL) {
			current->Next->prev = newNode;
		}
		current->prev = newNode;
		_size++;
	}
	void insertATend(T value) {
		
		Node* newNode = new Node();
		newNode->value = value;
		newNode->Next = NULL;
		if (head == NULL) {
			
			newNode->prev = NULL;
			head = newNode;
			_size++;
			return;
		}

		Node* current = head;

		while (current->Next != NULL) {

			current = current->Next;
		}
		current->Next = newNode;
		newNode->prev = current;
		_size++;
		return;


	}
	void DeletedNode(Node*& DeletTo) {
		Node* current = head;
		if (head == NULL || DeletTo == NULL) {
			return;
		}
		if (current->Next == NULL) {
			head = current;
			head = NULL;
			delete current;

		}
		if (DeletTo->Next != NULL) {
			DeletTo->Next->prev = DeletTo->prev;
		}
		if (DeletTo->prev != NULL) {
			DeletTo->prev->Next = DeletTo->Next;
		}
		_size--;
		delete DeletTo;
	}
	void DeletFirsteNode() {
		Node* current = head;
		if (head == NULL) {
			return;
		}
		head = current->Next;
		if (head != NULL) {
			head->prev = NULL;
		}
	
		delete current;
		_size--;
	}
	void DeletLastNode() {
		Node* current = head;
		if (head == NULL) {
			return;
		}
		if (current->Next == NULL) {
			head = current;
			head = NULL;
			delete current;
		}
		while (current->Next->Next != NULL) {
			current = current->Next;
		}

		Node* temp = current->Next;
		current->Next = NULL;
		delete temp;
		_size--;
		return;

	}
	T size() {
		return _size;
	}
	bool isEmpty() {
		return (_size == 0 )? true : false;
		
	}
	void clear() {
		
		
		while (_size>0) {
			DeletFirsteNode();
		
		}
	}
	void reverse() {
		Node* current = head;
		Node* temp = nullptr;
		while (current != NULL) {
			temp = current->prev;
			current->prev = current->Next;
			current->Next = temp;
			current = current->prev;
			
		}
		if (temp != nullptr) {
			head = temp->prev;
		}
		
	}
	Node* GetNode(int index) {
		Node* current = head;
		int count = 0;
		if (index > _size - 1 || index < 0) {
			return NULL;
		}
		while (current != NULL) {
		
		
			if (count == index) 
			
				break;
			current = current->Next;
			
		    count++;
		}
		return current;
	}
	T GetItem(int value) {
		Node* current = NULL;
		 current = GetNode(value);
		 if (current == NULL) {
			 return NULL;
		 }
		T number = current->value;
		return number;
	}
	bool updateItem(int index, T newValue) {
		
		Node* current = GetNode(index);
		if (current != NULL) {
			current->value = newValue;
			return true;
		}
		return false;
	}
	bool insertAfterIndex(int index, T value) {
		if (index > _size - 1 || index < 0) {
			return false;
		}
		Node* current = GetNode(index);
		insertAfter(current, value);
		return true;
	}
};
