#include "LinkedList.h"
#include <iostream>

int main(){
  LinkedList l;
  l.insertHead(10);
  l.insertHead(20);
  l.insertTail(30);
  cout << l << endl;
  l.findDelete(20);
  cout << l << endl;
  l.findDelete(40);
  cout << l << endl;
  return 0;
}
