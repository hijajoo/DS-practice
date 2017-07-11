class Node{
  private:
  int val;
  Node *next;
  
  public:
  Node(int x);
  Node *getNext();
  void setNext(Node *x);
  int getVal();
  void setVal(int x);
  friend ostream &operator <<(ostream out);
};
