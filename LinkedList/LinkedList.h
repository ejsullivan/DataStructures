// Eric Sullivan
// Fall 2016

#include <exception>
#include "ListNode.cpp"

// This excpetion is thrown when an attempt to access an index
// that does not exist is made
struct InvalidIndexException : public std::exception
{
	const char * dbgmsg () const throw ()
	{
		return "ERROR: Invalid index";
	}
};

template <typename T>
class LinkedList {
	private:
		ListNode<T> * head;
		ListNode<T> * tail;
		int size;
	public:
		LinkedList();	// Constructor
		void add(T value);	// Adds node to end of list
		void addAtFront(T value); // Adds node at front of list
		void remove(int index); // Removes the node at the given index
		T get(int index); // Gets value of the node at index
		int length(); // Returns the length of the list
};