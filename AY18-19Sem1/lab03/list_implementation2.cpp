// https://repl.it/@sidhant007/lab03

/*
node will comprise of its value, next node.
construct the head node of the list.
insertFirst(node* head, int v) {
  // trying to insert value "v" at the start of the list.
}
reverseList(node *head) {
  // not to make another new list.
  // 2 --> 3 --> 5 --> 7
  // 2 <-- 3 ... 5 --> 7
  // 2 <-- 3 <-- 5 ... 7
  // 2 <-- 3 <-- 5 <-- 7
}
*/


#include <bits/stdc++.h>
using namespace std;

struct node {
  int value;
  node* next;
  node(int _value = 0) {
    value = _value;
    next = NULL;
  }
};

void insertFirst(node* head, int v) {
  node* curr = new node(v); // new
  curr->next = head->next;
  head->next = curr;
}

void printList(node* head) {
  node* curr = head->next;
  while(curr != NULL) {
    cout << curr->value << " ";
    curr = curr->next;
  }
  cout << "\n";
}

void reverseList(node* head) {
  if(head->next == NULL or head->next->next == NULL)
    return ;

  node* prevElement = head->next;
  node* curr = head->next->next;
  prevElement->next = NULL;
  while(curr != NULL) {
    node* nextElement = curr->next;
    curr->next = prevElement;
    prevElement = curr;
    curr = nextElement;
  }
  head->next = prevElement;
}

int main() {
    // Create a list of integers
    // http://www.cplusplus.com/reference/list/list/

    node* head = new node();

    insertFirst(head, 3);
    insertFirst(head, 4);
    insertFirst(head, 5);

    printList(head);

    reverseList(head);
    printList(head);

    return 0;
}
