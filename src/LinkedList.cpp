/*
 * LinkedList.cpp
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#include "LinkedList.h"

LinkedList::LinkedList() {
	// TODO Auto-generated constructor stub

}

LinkedList::~LinkedList() {
	// TODO Auto-generated destructor stub
}

void LinkedList::LinkedList::Insert_at_end(int data){
  Node* node=new Node(data);
  if(head==nullptr){
    head=node;
    }
    else{
      Node* p=head;
      while(p!=NULL){
        p=p->next;
      }
      p=node;
    }
}
void LinkedList::Insert_at_beginning(int data){
  Node* node=new Node(data);
  if(head==nullptr){
    head=node;
  }
  else{
    node->next =head;
    head=node;
  }
}
void LinkedList:: display(){
  Node* p=head;
  while(p!=NULL){
    cout<<p->data<<"->";
    p=p->next;
  }
}
