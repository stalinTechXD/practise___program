#include<iostream>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
struct node
{
     int data;
     struct node *next;
};
struct node *head= NULL;
 
//head = (int *)malloc(sizeof(struct node));
///middle = (int *)malloc(sizeof(struct node));
//last = (int *)malloc(sizeof(struct node));

//head->data = 10;
//middle->data = 20;
//last->data = 30;

//head->next = middle;
//middle->data = last;
//last->data = NULL;
void display(){
struct node *temp = head;
while (temp != NULL)
{
   printf("%d\n",temp->data);
   temp= temp->next;
}
}



void insert(int val){
    struct node *newnode = new node;
    newnode->data = val;
    newnode->next = head;

    head = newnode; 
}


int main(){

  insert(12);
  insert(14);
  insert(15);
  display();
  return 0;
}





















 


 
 
 
		

		

 