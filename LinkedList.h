#include <iostream>
#include "Node.h"
using namespace std;

#ifndef INC_LINKEDLIST_H
#define INC_LINKEDLIST_H

class LinkedList{

  Node *head;
  Node *tail;
  
  public:
  LinkedList();
  void insertTail(int val); 
  void insertHead(int val);
  void findDelete(int val);
  friend ostream& operator <<(ostream& out, LinkedList l);
  void reverseIterative();
};

#endif
