#pragma once
#include <iostream>
#include <string>
using namespace std;

struct ListNode {
	string str;
	ListNode* next;
};

class Newsletter {
private:
	string name;
	ListNode* head;
public:
	Newsletter();
	void addSubscriber(string);
	void display() const;
	Newsletter(string str);
};

Newsletter::Newsletter() {
	head = nullptr;
}

void Newsletter::addSubscriber(string str) {
	// create new node
	ListNode* newNode = new ListNode;
	newNode->str = str;
	newNode->next = nullptr;

	// appending
	if (head == nullptr) {
		head = newNode;
	}
	else {
		ListNode* cur = head;
		while (cur->next != nullptr) {
			cur = cur->next;
		}
		cur->next = newNode;
	}
}


void Newsletter::display() const {
	ListNode* cur = head;
	while (cur != nullptr) {
		cout << cur->str << endl;
		cur = cur->next;
	}
}

template<class T>
class NewsletterList
{
private:
	ListNode* head;
public:
	NewsletterList() {
		head = nullptr;
	};
	void add(Newsletter n) {
		ListNode* newNode = new ListNode;
		newNode->str = str;
		newNode->next = nullptr;

		// appending
		if (head == nullptr) {
			head = newNode;
		}
		else {
			ListNode* cur = head;
			while (cur->next != nullptr) {
				cur = cur->next;
			}
			cur->next = newNode;
		}
	};

	void printSubscriberLists() const {
		ListNode* cur = head;
		while (cur != nullptr)
		{
			cout << cur->str << endl;
			cur = cur->next;
		}
	};
	
};



