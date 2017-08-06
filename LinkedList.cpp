#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(){
  head = NULL;
  tail = NULL;
}

void LinkedList::insertTail(int val){
  Node temp(val);
  if(tail == NULL){
    head = tail = &temp;
  } else {
    tail->setNext(&temp);
    tail = tail->getNext();
  }
}

void LinkedList::insertHead(int val){
  Node temp(val);
  if(head == NULL){
    head = tail = &temp;
  } else {
    temp.setNext(head);
    head = &temp;
  }
}

void LinkedList::findDelete(int val){
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

ostream& operator <<(ostream& out, LinkedList l){
  Node *curr = l.head;
  while(curr != NULL){
    out << curr << "\t";
    curr = curr->getNext();
  }
  return out;
}

void LinkedList::reverseIterative(){
  if(head == NULL)
    return;
  Node *curr = head;
  Node *prev = NULL;
  Node *next = curr->getNext();
  while(curr != NULL){
    curr->setNext(prev);
    prev = curr;
    curr = next;
    next = curr->getNext();
  }
}
