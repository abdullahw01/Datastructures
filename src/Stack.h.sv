/*
 * Stack.h
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#ifndef STACK_H_
#define STACK_H_

#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>

class Stack {
	private:
	T *st;
	int size;
	int top;

	public:
	Stack();
	Stack(int size);
	virtual ~Stack();

    void push(T x);
    T pop();
    T peek(int index);
    int stacktop();
    int isEmpty();
    int isFull();
    void Display();
};

#endif /* STACK_H_ */
