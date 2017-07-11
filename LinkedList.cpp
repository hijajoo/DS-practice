#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(){
  head = NULL;
  tail = NULL;
}

LinkedList::insertTail(int val){
  Node temp(val);
  if(tail == NULL){
    head = tail = &temp;
  } else {
    tail->setNext(&temp);
    tail = tail.getNext();
}

LinkedList::insertHead(int val){
  Node temp(val);
  if(head == NULL){
    head = tail = &temp;
  } else {
    temp.setNext(head);
    head = &temp;
}

LinkedList::findDelete(int val){
  Node *prev = head;
  if(prev == NULL){
    return;
  }
  Node *curr = prev->getNext();
  while(curr != NULL){
    if(curr->getVal() == val){
      prev->setNext(curr->getNext());
      return;
    }
  }
}

friend ostream Linkedlist::operator& (ostream out){
  Node *curr = head;
  while(curr != NULL){
    out << curr << "\t";
    curr = curr->getNext();
  }
  return out;
}
