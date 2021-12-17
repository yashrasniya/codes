#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *leftchid;
struct node *rightchild;

};
struct node* root=(struct *node)malloc(sizeof(struct node));
struct node* prv=root;


void insert(int data){
struct node *temp=(struct node)malloc(sizeof(struct node));
temp->data=data;
temp->leftchid=NULL;
temp->leftchid=NULL;
if(prv->leftchid!=NULL){
  prv->leftchid=temp ;
}
else if(prv->rightchild!=NULL){
      prv->rightchild=temp;
}else{
printf("node is full");
}
prv=temp;
}
int main(){
root->data=22;

insert(3);
insert(24);
insert(34);
}
}
