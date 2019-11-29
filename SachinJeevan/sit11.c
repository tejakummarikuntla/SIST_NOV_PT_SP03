#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    scanf("%d",&(head->data));
    head->prev=NULL;
    for(int i=0;i<n-1;i++){
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&(newNode->data));
        head->next = newNode;
        newNode->prev=head;
        head=head->next;
    }
    head->next=NULL;
    head=temp->next;
    int key;
    scanf("%d",&key);
    if(temp->data==key){
        temp=head;
        temp->prev=NULL;
    }
    else{
        while(head!=NULL){
            if(head->data==key && head->next==NULL){
                head->prev->next=NULL;
            }
            else if(head->data==key){
                head->prev->next=head->next;
                head->next->prev=head->prev;
            }
            head=head->next;
       
        }
    }
    
  
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}