/*
 * Queue.cpp
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#include "Queue.h"

Queue::Queue() {
	front=rear=-1;
	size=10;
	Q=new int[size];
}

Queue::Queue(int size) {
	front = rear =-1;
	this->size = size;
	Q = new int[this->size];
}

Queue::~Queue() {
	// TODO Auto-generated destructor stub
}

void Queue::enqueue(int x) {
	if(front==size-1) {
		cout<<"Queue Full\n";
	} else {
		front++;
		Q[front]=x;
	}
}

void Queue::display() {
	for(int i=rear+1;i<=front;i++) {
		cout<<Q[i]<<" ";
	}
}
