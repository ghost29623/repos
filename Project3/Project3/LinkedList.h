#pragma once
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

template <class T>
class LinkedList
{
	private:
		LinkedList<T>* head;
		LinkedList<T>* tail;
	public:
		LinkedList();
	
		void insert(T data);
		void display();
		void displayReverse();
		int countNode();
		void remove(T data);
		void clear();
}
