// Eric Sullivan
// Fall 2016

#include <iostream>
#include "LinkedList.h"

using namespace std;

template <typename T>
LinkedList<T>::LinkedList() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

template <typename T>
void LinkedList<T>::add(T value) {
	ListNode<T> * newNode;
	newNode = new ListNode<T>(value);

	if (this->size == 0) {
		this->head = newNode;
		this->tail = newNode;
	} 
	else if (this->size == 1) {
		this->head->setNext(newNode);
		this->tail = newNode;
	}
	else {
		this->tail->setNext(newNode);
		this->tail = newNode;
	}

	this->size++;
}

template <typename T>
void LinkedList<T>::addAtFront(T value) {
	ListNode<T> * newNode;
	newNode = new ListNode<T>(value);

	if (this->size == 0) {
		this->head = newNode;
		this->tail = newNode;
	}
	else if (this->size == 1) {
		newNode->setNext(this->head);
		this->head = newNode;
	}
	else {
		newNode->setNext(this->head);
		this->head = newNode;
	}

	this->size++;
}

template <typename T>
void LinkedList<T>::remove(int index) {

	ListNode<T> * curr; 
	ListNode<T> * prev;
	int count;
	curr = this->head;
	prev = NULL;

	if (index >= this->size) {
		throw InvalidIndexException();
	}

	for (count = 0; count < index; count++) {
		prev = curr;
		curr = curr->getNext();
	}

	prev->setNext(curr->getNext());
	delete curr;
	this->size--;
}

template <typename T>
T LinkedList<T>::get(int index) {

	ListNode<T> * curr;
	int count;
	curr = this->head;

	if (index >= this->size) {
		throw InvalidIndexException();
	}

	for (count = 0; count < index; count++) {
		curr = curr->getNext();
	}

	return curr->getValue();

}

template<typename T>
int LinkedList<T>::length() {
	return this->size;
}

// Used for testing only
/*
int main() {

	int i;

	cout << "THIS IS A TEST" << endl;
	LinkedList<int> * list = new LinkedList<int>();
	try {
		for (i = 0; i < 10; i++) {
			list->add(i);
		}

		list->addAtFront(99);
		list->remove(9);
		list->remove(5);

		for (i = 0; i < list->length(); i++) {
			cout << list->get(i) << endl;
		}

		cout << "List Length: " << list->length() << endl;
	}
	catch (InvalidIndexException& e) {
		cout << e.dbgmsg() << endl;
	}
	return 0;
}
*/