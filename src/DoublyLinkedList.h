/*
 * DoublyLinkedList.h
 *
 *  Created on: Feb 10, 2021
 *      Author: abdulwaheed
 */

#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

#include <iostream>
#include <cstddef>
using namespace std;

//struct nullptr_t {
//	void operator&() const = delete;
//	template<class T>    inline operator T*() const { return 0; }
//	template<class C, class T>    inline operator T C::*() const { return 0; }
//};
//nullptr_t nullptr;

class DllNode{
  public:
  int data;
  DllNode* prev;
  DllNode* next;
  DllNode(int data){
    this->data=data;
    prev=nullptr;
    next=nullptr;
  }
};

class DoublyLinkedList {
public:
	DllNode* head=nullptr;
	DoublyLinkedList();
	virtual ~DoublyLinkedList();

	void insert_at_begining(int data);
	void insert_at_end(int data);
	void insert_at_any_position(int data,int position);
	void deleteNode(int position);
	void display(DllNode* head);
};

#endif /* DOUBLYLINKEDLIST_H_ */
