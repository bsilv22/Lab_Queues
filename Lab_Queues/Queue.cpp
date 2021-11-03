#include "Queue.h"
#include <string>
#include <iostream>
using namespace std;


Queue::Queue()
{
	front = ARRAY_SIZE - 1;
	rear = front;
}


//queues an item
void Queue::Enqueue(int item)
{
	if (IsFull()) { return; }
	else
	{
		rear = (rear + 1) % ARRAY_SIZE;
		items[rear] = item;
		length++;
	}
	
}

//checks if list is fill
bool Queue::IsFull()
{
	return ((rear + 1) % ARRAY_SIZE == front);
	
}

void Queue::Dequeue(int& item) 
{
	if (IsEmpty()) {
		return;
	}
	else {
		front = (front + 1) % ARRAY_SIZE;
		item = items[front];
		length--;
	}
}

ostream& operator<<(ostream& os, Queue& rhs)
{
	int i = (rhs.front + 1) % ARRAY_SIZE;

	while (i != (rhs.rear + 1 & ARRAY_SIZE))
	{
		os << rhs.items[i] << endl;
		i = (i + 1) % ARRAY_SIZE;
	}

	/*
	for (int i = 0; i < rhs.length; i++)
	{
		os << rhs.items[i] << endl;
	}
	*/
	return os;
}


bool Queue::IsEmpty()
{
	return rear == front;
}

