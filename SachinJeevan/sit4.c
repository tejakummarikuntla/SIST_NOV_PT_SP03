#include<stdio.h>
int top=-1;
int isfull(int size){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int stack[],int size){
    if(isfull(size)){
        printf("Stack is full\n");
    }
    else{
        int data;
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}
int pop(int stack[]){
    if(isempty()){
        return -1;
    }
    else{
        top--;
        return stack[top+1];
    }
}
int peek(int stack[]){
    if(isempty()){
        return -1;
    }
    else{
        return stack[top];
    }
}
void print(int stack[]){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
int size;
scanf("%d",&size);
int stack[size];
int choice;
while(1){
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. peek\n");
    printf("4. print\n");
    printf("5. exit\n");
    scanf("%d",&choice);
    if(choice==1){
        push(stack,size);
    }
    else if(choice==2){
        int res=pop(stack);
        if(res==-1){
            printf("Stack is empty\n");
        }
        else{
            printf("%d is the popped element\n",res);
        }
    }
    else if(choice==3){
        int res=peek(stack);
        if(res==-1){
            printf("Stack is empty\n");
        }
        else{
            printf("%d is the top most element\n",res);
        }
    }
    else if(choice==4){
        print(stack);
    }
    else{
        break;
    }

}
}