// Eric Sullivan
// Fall 2016

#include "ListNode.h"
#include <iostream>

using namespace std;

template <typename T>
ListNode<T>::ListNode(T value, ListNode<T> * next) {
	this->value = value;
	this->next = next;
}

template <typename T>
ListNode<T>::ListNode(T value) {
	this->value = value;
	this->next = NULL;
}

template <typename T>
void ListNode<T>::setValue(T value) {
	this->value = value;
}

template <typename T>
T ListNode<T>::getValue(void) {
	return this->value;
}

template <typename T>
void ListNode<T>::setNext(ListNode<T> * next) {
	this->next = next;
}

template <typename T>
ListNode<T> * ListNode<T>::getNext() {
	return this->next;
}