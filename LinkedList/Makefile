# Eric Sullivan
# Fall 2016

CC = g++
OBJS = LinkedList.o ListNode.o

all: $(OBJS)
	$(CC) $(OBJS) -o LinkedList

LinkedList.o: ListNode.o
	$(CC) LinkedList.cpp -c -o $@

ListNode.o:
	$(CC) ListNode.cpp -c -o $@

clean:
	rm $(OBJS) LinkedList 
