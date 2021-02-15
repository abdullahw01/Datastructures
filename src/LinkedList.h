/*
 * LinkedList.h
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
  public:
   int data;
   Node* next;
   Node(){

    data =0;
    next=nullptr;

  }
  Node(int data){
    this->data=data;
    next=nullptr;

  }
};

class LinkedList {
	public:
	Node* head=nullptr;
	void Insert_at_end(int data);
	void Insert_at_beginning(int data);
	void display();

	LinkedList();
	virtual ~LinkedList();
};

#endif /* LINKEDLIST_H_ */
