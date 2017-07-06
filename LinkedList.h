class LinkedList{
  
  Node *head;
  Node *tail;
  
  public:
  LinkedList();
  void insertTail(int val); 
  void insertHead(int val);
  void findDelete(int val);
  friend ostream &operator <<(ostream out, LinkedList l);
};
