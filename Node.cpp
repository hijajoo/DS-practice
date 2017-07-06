class Node{
  private:
  int val;
  Node *next;
  
  public:
  Node(int x=0){
    val = x;
    next = NULL;
  }
  Node *getNext(){
    return next;
  }
  void setNext(Node *x){
    next = x;
  }
  int getVal(){
    return val;
  }
  void setVal(int x){
    val = x;
  }
  friend ostream &operator <<(ostream out, Node x){
    return out << x.getVal();
  }
};
