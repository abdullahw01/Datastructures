/*
 * BinaryTree.h
 *
 *  Created on: Feb 7, 2021
 *      Author: abdulwaheed
 */

#ifndef BINARYTREE_H_
#define BINARYTREE_H_

#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

class BinaryTree {
public:
	BinaryTree();          // constructor
	virtual ~BinaryTree(); // destructor

	struct node * createNode (int val);
	struct node * findValue (struct node *node, int val);
	struct node * insertNode (struct node *node, int val);
	void destroyTree(struct node *root);
	//todo
	//void removeNode(struct node *node);
	//void printTree();

	node * root;
};

#endif /* BINARYTREE_H_ */
