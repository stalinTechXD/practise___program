#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *root;
struct node *getnewnode(int val){
    struct node *newnode = new node;
    newnode ->key = val;
    newnode->left = NULL;
    newnode ->right = NULL;
    return newnode;
}

struct node *insert(struct node *root , int val){
    if(root == NULL){
        return getnewnode(val);
    }
     if(root->key > val){
        root->left = insert(root->left,val);
    }
    else    if(root->key < val){
        root->right = insert(root->right,val);
    }
    return root;
}

void inorder(struct node * root){
    if (root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<"the tree element is"<< root->key <<endl;
    inorder(root->right);
}

int main(){
    struct node *root;
    root =  insert(root,100);
    root =  insert(root,50);
    root = insert(root,150);
    root =  insert(root,200);
    inorder(root);
    return 0;
}    
