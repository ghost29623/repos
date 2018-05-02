#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>

class Node
{
private:
	int data;
	Node<T>* next;
	Node<T>* prev;
public:
	Node(T d) { data = d; next = nullptr; prev = nullptr}
	T getValue() { return data; }
	Node<T>* getNext() { return next; }
	Node<T>* getPrev() { return prev; }
	void setNext(Node<T>* n) { next = n; }
	void setPrev(Node<T>* p) { Prev = p; }
};