class LinkedList{
  Node *head;
  Node *tail;
  
  public:
  LinkedList(){
    head = NULL;
    tail = NULL;
  }
  
  void insertTail(int val){
    Node temp(val);
    if(tail == NULL){
      head = tail = &temp;
    } else {
      tail->setNext(temp);
    }
  }
  
  void insertHead(int val){
    Node temp(val);
    if(head == NULL){
      head = tail = &temp;
    } else {
      temp->setNext(head);
      head = &temp;
    }
  }
  
  void findDelete(int val){
    if(head == NULL)
      return;
    Node *ptr_prev = head;
    Node *ptr_curr = head->getNext();
    while(ptr_curr != NULL){
      if(ptr_curr->getVal() == val){
        ptr_prev->setNext(ptr_curr.getNext);
        return;
      }
    }
  }
  
  friend ostream &operator <<(ostream out, LinkedList l){
    Node *curr = l.getHead();
    while(curr != NULL){
      out << curr << endl;
      curr = curr->getNext();
    }
    return out;
  }
};
