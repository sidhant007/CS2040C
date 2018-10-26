#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    // node* cur = (struct node*)malloc(sizeof(struct node));
    node* cur = new node();
    /*
    if (cur == NULL)
    {
        cout << "memory error\n";
        exit(0);
    }
    */
    cur->data = data;
    cur->left = NULL;
    cur->right = NULL;
    return cur;
}

struct node* insertBST(node* root, int n){
    node* cur = createNode(n);
    if (root == NULL) {
        root = cur;
    }
    else{
        while(true){
            if (n > root->data){
                if (root->right == NULL){
                    root->right = cur;
                    break;
                }
                else{
                    root = root->right;
                }
            }
            else if(n < root->data){
                if (root->left == NULL){
                    root->left = cur;
                    break;
                }
                else{
                    root = root->left;
                }
            }
            else{
                cout << "duplicate" << '\n';
                return NULL;
            }
        }
    }
    return cur;
}

void inorder(node* root){
    if (root != NULL){
        inorder(root->left);
        cout << root->data << ' ';
        inorder(root->right);
    }
}

bool searchBST(node* root, int v){
    if (root == NULL){
        return false;
    }
    else if (root->data == v){
        return true;
    }
    else if (v < root->data){
        return searchBST(root->left, v);
    }
    else{
        return searchBST(root->right, v);
    }
}

int height(node* root){
    if (root == NULL){
        return 0;
    }
    else{
        int lh = 1 + height(root->left);
        int rh = 1 + height(root->right);
        int h = lh > rh ? lh : rh;
        return h;
    }
}

int minBST(node* root){
    if (root == NULL)
        return -1;
    while(root->left != NULL)
        root = root->left;
    return root->data;
}

int maxBST(node* root){
    if (root == NULL)
        return -1;
    while(root->right != NULL)
        root = root->right;
    return root->data;
}

bool isBalanced(node* root){
    if (root == NULL) {
        return true;
    }
    else {
        int lh = height(root->left);
        int rh = height(root->right);
        if (abs(lh-rh) <= 1) {
            return isBalanced(root->left) & isBalanced(root->right);
        }
        else {
            return false;
        }
    }
}

int main()
{
    int n, data, v;
    cin >> n;
    node* head = NULL;
    for(int i=0;i<n;i++){
        cin >> data;
        if(i == 0){
            head = insertBST(head, data);
        }
        else{
            insertBST(head, data);
        }
    }
    inorder(head);
    cout << '\n';
    cout << height(head) << '\n';
    cout << minBST(head) << '\n';
    cout << maxBST(head) << '\n';
    cin >> v;
    cout << searchBST(head, v) << '\n';
    cin >> v;
    cout << searchBST(head, v) << '\n';
    cout << isBalanced(head) << '\n';
    return 0;
}
