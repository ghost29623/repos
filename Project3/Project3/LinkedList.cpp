#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Node.h"
using namespace std;

template<class T>
LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

template<class T>
void LinkedList<T>::insert(T data)
{
	Node<T>* newNode = new Node<T>(data);
	if (head == nullptr && tail == nullptr)
	{
		head = tail = newNode;
	}
	else if (head->getData() > data)
	{
		newNode->setNext(head);
		head->setPrevious(newNode);
		head = newNode;
	}
	else if (tail->getData() <= data)
	{
		tail->setNext(newNode);
		newNode->setPrev(tail);
		tail = newNode;
	}
}

template <class T>
void LinkedList<T>::display()
{
	if (head == nullptr)
		cout << EMPTY << endl;
	else
		cout << " --DISPLAY--" << endl;
		Node<T>* cur = head;
		while (cur->getNext() != nullptr) 
		{
			cout << cur->getValue() << endl;
			cur = cur->getNext();
		}
		cout << cur->getValue() << endl;
}

template <class T>
void LinkedList::displayReverse()
{
	if (head == nullptr)
		cout << EMPTY << endl;
	else
		cout << " -- DISPLAY REVERSE --" << endl;
	Node<T>* cur = prev;
	while (cur->getprev() != nullptr)
	{
		cout << cur->getValue() << endl;
		cur = cur->getPrev();
	}
	cout << cur->getValue() << endl;
}

template <class T>
int LinkedList::countNode()
{
	if (T)
{



