#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *leftchid;
struct node *rightchild;

};



struct node* insert(int data,struct node *prv){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->leftchid=NULL;
temp->leftchid=NULL;
if(prv->leftchid==NULL){
  prv->leftchid=temp ;
}
else if(prv->rightchild==NULL){
      prv->rightchild=temp;
}else{
printf("node is full");
}
prv=temp;
return prv;
}

int main(){

struct node* root =(struct node *)malloc(sizeof(struct node));
root->data=22;

struct node* prv = root;
prv=insert(1,prv);
prv=insert(3,root);
prv=insert(7,root);



}
