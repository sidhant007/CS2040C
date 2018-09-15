// Binary search using standard C++ library
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* createNode(){
    // node* cur = (struct node*)malloc(sizeof(struct node));
    node* cur = new node();
    if(cur == NULL) {
        cout << "memory error\n";
        exit(0);
    }
    cur->next = NULL;
    return cur;
}

struct node* createList(){
    node* head = createNode();
    return head;
}

void insertFirst(node* head, int v){
    node* cur = createNode();
    cur->data = v;
    cur->next = head->next;
    head->next = cur;
}

void printList(node* head){
    node* cur = head->next;
    while(cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

void reverseList(node* head){
    // no change if list has zero or one element
    if(head->next == NULL or head->next->next == NULL)
      return;

    node* cur = head->next->next;

    head->next->next = NULL;
    while(cur != NULL){
        node* temp = cur;
        cur = cur->next;
        temp->next = head->next;
        head->next = temp;
    }
}

int main() {
   node* l = createList();

   insertFirst(l, 10);
   insertFirst(l, 30);
   insertFirst(l, 20);
   insertFirst(l, 40);
   insertFirst(l, 50);
   insertFirst(l, 5);

   printList(l);
   cout << '\n';

   reverseList(l);
   printList(l);
   cout << '\n';

   return 0;
}
