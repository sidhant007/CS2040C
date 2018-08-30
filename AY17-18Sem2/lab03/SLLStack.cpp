#include <bits/stdc++.h>
using namespace std;

class SLL { // SLL = Singly Linked List
  struct Vertex { //A node.
    int item; //The value at a node.
    Vertex *next; //The pointer to the next node.
  };
private:
  Vertex *head; //The current head.
public:
  SLL() { //Constructor.
    head = NULL; 
  }
  void InsertAtHead(int value) { //Pushes in after head.
    Vertex *vtx = new Vertex(); //create new node
    vtx->item = value;
    vtx->next = head; // IMP!!
    head = vtx;       // IMP!!
  }
  int GetHead() {
    return head->item;
  }
  void DeleteHead() {
    if (head == NULL) return; // avoid crashing, safegaurd
    Vertex *temp = head; //not needed necessarily, useful if you want to erase from memory
    head = head->next; // IMP!!
     delete temp; //deleted from memory
  }
  bool IsEmpty() {
    return head == NULL;
  }
  // Suppose that there are many other SLL operations that we don't want to expose like Insert(i, v), Delete(i), InsertAfterTail(v), DeleteTail(), etc in MyStack class...
  void PrintList() {
    for (Vertex *vtx = head; vtx != NULL; vtx = vtx->next) // Smart looping :o
      cout << vtx->item << " ";
    cout << endl;
  }
};

class MyStack : SLL { // emulate C++ STL stack interfaces by extending SLL into MyStack subclass
public:
  void push(int value) { InsertAtHead(value); }
  int top() { return GetHead(); }
  void pop() { DeleteHead(); }
  bool empty() { return IsEmpty(); }
};

int main() {
  SLL l;
  l.InsertAtHead(5);
  l.InsertAtHead(2);
  l.InsertAtHead(7);
  l.PrintList(); // can, output 7->2->5

  MyStack s;
  s.push(5);
  s.push(2);
  s.push(7);
  // s.PrintList(); // cannot, we don't have access to this parent class method
  cout << s.top() << endl; // should be 7
  return 0;
}
