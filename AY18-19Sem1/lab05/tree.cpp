#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    // node* cur = (struct node*)malloc(sizeof(struct node));
    node* cur = new node();
    cur->data = data;
    cur->left = NULL;
    cur->right = NULL;
    return cur;
}

struct node* createTree(int n){
    node* root = createNode(1);
    queue<node*> q;
    q.push(root);
    int i = 2;
    while(i<=n){
        node* parent = q.front();
        node* lchild = createNode(i);
        parent->left = lchild;
        q.push(lchild);
        i++;
        if (i<=n){
            node* rchild = createNode(i);
            parent->right = rchild;
            q.push(rchild);
            i++;
        }
        q.pop();
    }
    return root;
}

void preorder(node* root){
    if (root != NULL){
        cout << root->data << ' ';
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root){
    if (root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << ' ';
    }
}

void inorder(node* root){
    if (root != NULL){
        inorder(root->left);
        cout << root->data << ' ';
        inorder(root->right);
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

int treesize(node* root){
    if (root == NULL){
        return 0;
    }
    else{
        return 1 + treesize(root->left) + treesize(root->right);
    }
}

int leafcount(node* root){
    if (root == NULL){
        return 0;
    }
    else if (root->left == NULL && root->right == NULL){
            return 1;
    }
    else{
        return leafcount(root->left) + leafcount(root->right);
    }
}

int main()
{
    int n;
    cout << "Enter n:" << '\n';
    cin >> n;
    node* root = createTree(n);
    preorder(root);
    cout << '\n';
    postorder(root);
    cout << '\n';
    inorder(root);
    cout << '\n';
    cout << height(root) << '\n';
    cout << treesize(root) << '\n';
    cout << leafcount(root) << '\n';
    return 0;
}
