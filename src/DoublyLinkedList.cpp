/*
 * DoublyLinkedList.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: abdulwaheed
 */

#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
	// TODO Auto-generated constructor stub

}

DoublyLinkedList::~DoublyLinkedList() {

}

void DoublyLinkedList::insert_at_begining(int data){
	DllNode* node = new DllNode(data);
	if(head==nullptr){
		node->prev=nullptr;
		node->next=nullptr;
		head=node;
	} else{
		node->data=data;
		node->next=head;
		node->prev=nullptr;
		head=node;
	}
}

void DoublyLinkedList::insert_at_end(int data){

	DllNode* p=head;
	DllNode* node = new DllNode(data);
	while(p->next!=nullptr){
		p=p->next;
	}
	p->next=node;
	node->prev=p;
}

void DoublyLinkedList::insert_at_any_position(int data,int position){
	DllNode* p=head;
	DllNode* q=head;
	DllNode* node=new DllNode(data);
	for(int i=0;i<position-1;i++){
		p=p->next;
		q=q->next->next;
	}
	p->next=node;
	node->prev=p;
	node->next=q;
	q->prev=node;

}

void DoublyLinkedList::deleteNode(int position){
	DllNode* p=head;
	DllNode* q=head;
	for(int i=1; i<position-1;i++){
		p=p->next;
		q=p->next->next;
	}
	p->next=q;
	q->prev=p;

}

void DoublyLinkedList::display(DllNode* head){
	while(head!=nullptr){
		cout<<head->data<<"->";
		cout<<"<-";
		head=head->next;
	}
	cout<<endl;
}

