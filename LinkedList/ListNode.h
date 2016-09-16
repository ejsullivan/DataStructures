// Eric Sullivan
// Fall 2016

template <typename T>
class ListNode {
	private:
		T value;
		ListNode<T> * next;
	public:
		ListNode(T value, ListNode<T> * next);
		ListNode(T value);
		void setValue(T value);
		T getValue(void);
		void setNext(ListNode<T> * next);
		ListNode<T> * getNext(void);
};