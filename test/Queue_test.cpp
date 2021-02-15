/*
 * Queue_test.cpp
 *
 *  Created on: Feb 13, 2021
 *      Author: abdulwaheed
 */

#include "Queue.h"

int main(){
   Queue q;
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   q.enqueue(6);
   q.enqueue(7);
   q.enqueue(8);
   q.enqueue(9);
   q.enqueue(10);
   q.enqueue(11);
   q.enqueue(12);

   q.display();

   return 0;
}
