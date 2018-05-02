#pragma once
#include <exception>
#include <iostream>
using namespace std;

template <class T>
struct Node {
	T data;
	Node * next;
};

template <class T>
class LinkedList {
private:
	Node<T> * headPointer;
	int length;

public:
	LinkedList() {
		length = 0;
		headPointer = nullptr;
	}

	void putItem(const T& item) {
		Node<T> * tempPtr = new Node<T>;
		tempPtr->data = item;
		tempPtr->next = headPointer;
		headPointer = tempPtr;
		length++;
	}

	bool isEmpty() const {
		return length == 0;
	}

	// return false for an empty list
	// otherwise remove the head
	bool remove() {
		if (length == 0)
			return false;
		Node<T> * temp = headPointer;
		headPointer = headPointer->next;
		length--;
		delete temp;
		return true;
	}




	T	getFirst() const {
		if (isEmpty())
			throw logic_error("Can't get first for empty list!");
		return headPointer->data;
	}

	void clear() {
		if (!isEmpty()) {
			remove();
			clear();
		}
	}

	~LinkedList() {
		clear();
	}

	void printListHelper(Node<T> * p) const {
		if (p != nullptr) {
			cout << p->data << " ";
			printListHelper(p->next);
		}
	}

	void printList() const {
		cout << "{ ";
		printListHelper(headPointer);
		cout << "}" << endl;
	}


	int getLength() const {
		return length;
	}


};