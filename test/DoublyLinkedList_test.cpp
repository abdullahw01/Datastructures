/*
 * DoublyLinkedList_test.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: abdulwaheed
 */

#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList dll;
	dll.insert_at_begining(5);
	dll.insert_at_begining(4);
	dll.insert_at_begining(3);
	dll.insert_at_begining(2);
	dll.insert_at_begining(1);
	dll.insert_at_end(6);
	dll.insert_at_end(7);
	dll.insert_at_end(8);
	dll.display(dll.head);
	dll.deleteNode(3);
	dll.display(dll.head);

	return 0;
}
