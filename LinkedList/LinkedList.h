// Eric Sullivan
// Fall 2016

#include "ListNode.h"

template <typename T>
class LinkedList {
	private:
		ListNode<T> head;
		ListNode<T> tail;
	public:
		LinkedList();
		void add(T value);
		T get(int index);
};