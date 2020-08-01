#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 

struct node
{
    int key;
    struct node  *left;
    struct node *right; 
};

struct node *root;
struct node *getnewnode(int val){
    struct node *newnode = new node;
    newnode -> key  = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct  node *insert(struct node *root, int val)
{
     if (root == NULL){
         return getnewnode(val) ;
     }
     if (root ->key > val)
     {
         root ->left = insert(root->left,val);
     }
     else if(root->key < val)
     {
         root -> right = insert(root->right,val); 
     }
     return root;
};

void inorder(struct node *root){
    if (root == NULL){
        return ;
    }
    inorder(root->left);
    cout <<(root ->key) <<endl;
    inorder(root->right);
}
void search(struct node *root, int val){
    if (root == NULL){
        return ;
    }
    if (root -> key == val){
        cout<<"success";

    }
    else if(root -> key > val){
        search(root -> left , val);
    }
    else {
        search(root -> right , val);
    }
}

int getminnode(struct node *root){
    struct node* temp = root;
    while (temp->left != NULL)
    {
         temp  = temp -> left;
    }
    return temp->key;
    
}
 struct node *removenode(struct node *root , int val)
 {
     if(root == NULL){
         return NULL;
     }
    if(root -> key > val){
         root -> left = removenode(root->left, val);
     }
        else if(root -> key < val){
         root -> right = removenode(root->right, val);
     }
     else{
         if (root -> left == NULL  && root -> right == NULL){
             free(root);
             return NULL;
         }
         else if(root -> left == NULL)
         {
             struct node *temp = root -> right;
             free(root);
             return temp;
         }
        else if(root -> right == NULL)
         {
             struct node *temp = root -> left;
             free(root);
             return temp;
         }

         else {
             int rightmint = getminnode(root->right);
             root->key = rightmint;
             root->right = removenode(root->right,rightmint);
             

         }
            }
            return root;
 }
 
 int count(struct node *root){
     int x,y;
     if(root!=NULL){
         x = count(root->left);
         y = count(root->right);
         return x+y+1;
     }
     return 0;
 }


  int height(struct node *root){
     int x,y;
     if(root!=NULL){
         x =  height(root->left);
         y =  height(root->right);
         if(x>y){
             return x+1;
         }
         else{
             return y+1;
         }
     }
     return 0;
 }
 
 int leaves(struct node *root){
     if(root != NULL){
         int x = leaves(root->left);
         int y = leaves(root->right);
         if (root->left == NULL && root->right == NULL){
            return x+y+1;
         }
         else
         {
             return x+y;
         }
             
     }
     return 0;
 }    

  void preorder(struct node *root){
    if (root == NULL){
        return ;
    }
    cout <<(root ->key) <<endl;
    preorder(root->left);
    
    preorder(root->right);
}   
 void postorder(struct node *root){
    if (root == NULL){
        return ;
    }
    postorder(root->left);
   
    postorder(root->right);
     cout <<(root ->key) <<endl;
}

int main(){
    struct node *root = NULL;
    root = insert(root,100);
    root = insert(root,150);
    root = insert(root,50);
    root = insert(root,500);
    root = insert(root,5700);
    root = insert(root,55600);

    root = insert(root,56500);
    inorder(root);
    search(root,500);
    root  = removenode(root , 500);
    inorder(root);
    int c = count(root);
   cout<<"the count of a binary search tree is "<<c<<endl;
    int p = height(root);
    cout<<"the height of a binary search tree is "<<p<<endl;
    int q = leaves(root);
    cout<<"the count of leaves "<<q<<endl;
    preorder(root);
    cout<<"--------------------------------------------------------------";
    postorder(root);
  
 
    return 0;
}


