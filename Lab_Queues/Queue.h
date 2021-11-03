#pragma once
#include <string>
using namespace std;

#define ARRAY_SIZE 10

const int max = 10;

class Queue
{
public: 
	Queue();       // DONE 
	//~Queue();        // DONE 
	void Enqueue(int item);    // DONE 
	void Dequeue(int& item);   // DONE
	

	void MakeEmpty();    // Clears the queue 
	bool IsEmpty();     // Is the queue empty true/false 
	bool IsFull();      // Is the queue full true/false 

	Queue(const Queue& rhs);        // Copy constructor 
	const Queue& operator=(const Queue& rhs);    // Assignment overload

	friend ostream& operator<<(ostream& os, Queue& rhs);

private:

	int front; // An array index. One BEFORE the first element.
	int rear; // An array index. The actual last element.
	
	int items[ARRAY_SIZE];  // Array stores the queue data
	int length;

};