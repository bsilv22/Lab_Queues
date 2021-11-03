#include <string>
#include <ostream>
#include <iostream>
#include <fstream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue q;
	int num;

	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);
	q.Enqueue(60);
	q.Enqueue(70);
	q.Enqueue(80);
	q.Enqueue(90);


	//remove 5 elements from the queue
	q.Dequeue(num);
	q.Dequeue(num);
	q.Dequeue(num);
	q.Dequeue(num);
	q.Dequeue(num);

	//Add 5 elements to the que
	q.Enqueue(100);
	q.Enqueue(110);
	q.Enqueue(120);
	q.Enqueue(130);
	q.Enqueue(140);
	cout << q << endl;

}