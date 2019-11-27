#include<stdio.h>
int rear=0,front=0;
int isfull(int size){
    if(rear==size){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(rear==front){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int queue[],int size){
    if(isfull(size)){
        printf("Queue is full\n");
    }
    else{
        int data;
        scanf("%d",&data);
        queue[rear]=data;
        rear++;
    }
}
int dequeue(int queue[]){
    if(isempty()){
        return -1;
    }
    else{
        front++;
        return queue[front-1];
    }
}
int peek(int queue[]){
    if(isempty()){
        return -1;
    }
    else{
        return queue[front];
    }
}

int main(){
int size;
scanf("%d",&size);
int queue[size];
int choice;
while(1){
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("%3. peek\n");
    printf("4. exit\n");
    scanf("%d",&choice);
    if(choice==1){
        enqueue(queue,size);

    }
    else if( choice==2){
        int res=dequeue(queue);
        if(res==-1){
            printf("Queue is empty\n");
        }
        else{
            printf("%d is the dequeued element\n",res);
        }
    }
    else if( choice==3){
        int res=peek(queue);
        if(res==-1){
            printf("Queue is empty\n");
        }
        else{
            printf("%d is the front element\n",res);
        }
    }
    else{
        break;
    }
}
}
