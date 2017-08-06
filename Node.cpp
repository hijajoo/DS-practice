#include "Node.h"

Node::Node(int x){
  val = x;
  next = NULL;
}

Node *Node::getNext(){
  return next;
}

void Node::setNext(Node *x){
  next = x;
}

int Node::getVal(){
  return val;
}

void Node::setVal(int x){
  val = x;
}

ostream &operator << (ostream out, Node x){
  return out << x.getVal();
}
