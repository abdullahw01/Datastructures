/*
 * LinkedList_test.cpp
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#include "LinkedList.h"

int main() {
  LinkedList list;
  list.Insert_at_beginning(5);
  list.Insert_at_beginning(4);
  list.Insert_at_beginning(2);
  list.Insert_at_end(1);
  list.display();
return 0;
}
