#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
     int key;
     struct node *left;
     struct node *right;
};
struct node *root;                                               //initialize of root node

struct node *getnode(int val)
{
    struct node *newnode = new node;
     

    newnode->key = val;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;                                              //this node will return the root node with two null node
}

struct node *insert(struct node *root, int val){
    if(root == NULL){
        return getnode(val);

    }
    if(root->key < val){
        root->right = insert(root->right,val);
    }
    else if(root->key > val)
    {
        root->left= insert(root->left,val);
    }
        

    

    return root;

}

void  inorder(struct node *root)
{
    if(root == NULL)
        return ;
    inorder(root->left);
    cout<<(root->key)<<" "<<endl;
    inorder(root->right);    
}  

void search(struct node *root,int val){
    if(root ==  NULL){
        return ;
    }
    if(root->key == val){
        cout<<"element found "<< root;
    }
    if(root->key > val){

        search(root->left , val);

    }else{
        search(root->right,val);
    }
    

}

int main(){
    struct node *root = NULL;
    root = insert(root,100); //the address 1024
    root = insert(root,50);
    root = insert(root,150);
    root  = insert(root,125);
    inorder(root);
    search(root,50);
    
    return 0;
}
