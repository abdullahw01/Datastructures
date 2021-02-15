/*
 * BinaryTree_test.cpp
 *
 *  Created on: Feb 7, 2021
 *      Author: abdulwaheed
 */

#include "BinaryTree.h"

int
main() {
	BinaryTree *tree = new BinaryTree();
	tree->insertNode(tree->root, 9);
	tree->insertNode(tree->root, 8);
	tree->insertNode(tree->root, 2);
	tree->insertNode(tree->root, 1);
	tree->insertNode(tree->root, 3);

	  int val;
	  cout << "Enter value to search: ";
	  cin >> val;
	  if (tree->findValue (tree->root, val)) {   //if given key found then return that node.
	    cout << "Given number is found" << endl;
	    return 0;
	  }
	  else                          //if given key is not found.
	    cout << "Given number is not found" << endl;


	delete tree;
	return -1;
}
