/*
 * Stack.cpp
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#include "Stack.h"

Stack<T>::Stack() {
	size=10;
	top=-1;
	st=new T[size];
}

Stack<T>::Stack(int size) {
	this->size=size;
	top=1;
	st=new T[this->size];
}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

void Stack<T>::push(T x) {
   if(isFull()) {
     cout<<"Stack Overflow"<<endl;
   } else {
     top++;
     st[top]=x;
   }
}

T Stack<T>::pop() {
  if(isEmpty()) {
    cout<<"Stack Underflow"<<endl;
  } else {
    x=st[top];
    top--;
  }

  return x;
}

T Stack<T>::peek(int index) {
}
