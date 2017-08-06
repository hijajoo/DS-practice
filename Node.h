#include <iostream>
using namespace std;

#ifndef INC_NODE_H
#define INC_NODE_H

class Node{
  
  int val;
  Node *next;
  
  public:
  Node(int x = 0);
  Node *getNext();
  void setNext(Node *x);
  int getVal();
  void setVal(int x);
  friend ostream &operator <<(ostream out, Node x);
};
#endif
