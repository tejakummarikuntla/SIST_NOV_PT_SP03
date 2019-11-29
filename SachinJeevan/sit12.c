#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int val){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct Node* insert(struct Node* root,int val){
    if(root==NULL){
        return newNode(val);
    }
    else if(val>root->data){
        root->right = insert(root->right,val);
    }
    else if(val<root->data){
        root->left=insert(root->left,val);
    }
}
int main(){
    struct Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
     insert(root,40);
      insert(root,20);
       insert(root,10);
        insert(root,80);
         insert(root,60);
          insert(root,70);
           insert(root,90);
           inorder(root);

}