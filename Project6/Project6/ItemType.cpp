#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

template <class T>
struct Node {
	T data;
	Node * next;
};

template <class T>
class ItemType {
private:
	Node<T> * headPointer;
	int length;

public:
	ItemType();
	void putItem(const T& itemToInsert) {
		Node<T> * tempPtr = new Node<T>;
		tempPtr->data = itemToInsert;
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
