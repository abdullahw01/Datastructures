/*
 * Queue.h
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue {
	private:
	int front;
	int rear;
	int size;
	int* Q;

	public:
	Queue();
	Queue(int size);
	virtual ~Queue();

	void enqueue(int x);
	int dequeue();
	void display();
};

#endif /* QUEUE_H_ */
