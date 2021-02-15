/*
 * BinaryTree.cpp
 *
 *  Created on: Feb 7, 2021
 *      Author: abdulwaheed
 */

#include "BinaryTree.h"

BinaryTree::BinaryTree() {
	struct node * root = NULL;
}

BinaryTree::~BinaryTree() {
	destroyTree(root);
}

void
BinaryTree::destroyTree(node *leaf){
	if(leaf != NULL){
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
	}
}

struct node *
BinaryTree::createNode (int val)
{
  struct node *temp = (struct node *) malloc (sizeof (struct node));
  temp->data = val;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *
BinaryTree::findValue (struct node *node, int val)
{
// Base Cases: root is null or val is present at root
  if (root == NULL || root->data == val)
    return root;

// Key is greater than root's val
  if (root->data < val)
    return findValue (root->right, val);

// Key is smaller than root's val
  return findValue (root->left, val);
}

struct node *
BinaryTree::insertNode (struct node *node, int val)
{
  if (node == NULL)
    return createNode (val);
  if (val < node->data)
    node->left = insertNode (node->left, val);
  else if (val > node->data)
    node->right = insertNode (node->right, val);
  return node;
}
