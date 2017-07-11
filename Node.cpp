#include "Node.h"

Node::Node(int x=0){
  val = x;
  next = NULL;
}

Node::Node *getNext(){
  return next;
}

Node::setNext(Node *x){
  next = x;
}
int Node::getVal(){
  return val;
}

Node::setVal(int x){
  val = x;
}

friend ostream Node::operator<< (ostream out){
  return out << x.getVal();
}
