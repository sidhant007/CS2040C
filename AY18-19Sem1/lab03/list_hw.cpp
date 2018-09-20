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
    node* cur = (struct node*)malloc(sizeof(struct node));
    if (cur == NULL)
    {
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
    while(cur != NULL){
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


//find the lenght of a linked list
int list_length(node* head){
    int len = 0;
    node* temp = head->next;
    while(temp != NULL){
        len += 1;
        temp = temp->next;
    }
    return len;
}


//find an element v in a list
bool list_find(node* head, int v){
    int len = 0;
    node* temp = head->next;
    while(temp != NULL){
        if (temp->data == v)
            return true;
        temp = temp->next;
    }
    return false;
}

// insert an element v at index k in a list
void insertAtIndex(node* head, int k, int v){
    // if index k is 0 or negative insert at first postion
    if (k < 1){
        insertFirst(head, v);
        return;
    }
    int i = 1;
    node* cur = head->next;
    // if index k is larger than list length, insert at end
    while(i<k and cur->next != NULL){
        i++;
        cur = cur->next;
    }
    node* temp = createNode();
    temp->data = v;
    temp->next = cur->next;
    cur->next = temp;
}

int main()
{
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
   cout << list_length(l) << '\n';
   cout << list_find(l, 30) << '\n';
   cout << list_find(l, 100) << '\n';
   insertAtIndex(l, -2, 1);
   printList(l);
   cout << '\n';
   insertAtIndex(l, 0, 2);
   printList(l);
   cout << '\n';
   insertAtIndex(l, 4, 33);
   printList(l);
   cout << '\n';
   insertAtIndex(l, 20, 100);
   printList(l);
   cout << '\n';
   return 0;
}
