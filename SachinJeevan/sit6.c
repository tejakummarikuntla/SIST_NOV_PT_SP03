#include<stdio.h>
#include<string.h>
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
void push(char stack[],int size,char data){
    if(isfull(size)){
        printf("Stack is full\n");
    }
    else{
        top++;
        stack[top]=data;
    }
}
int pop(char stack[]){
    if(isempty()){
        return -1;
    }
    else{
        top--;
        return stack[top+1];
    }
}
int peek(char stack[]){
    if(isempty()){
        return -1;
    }
    else{
        return stack[top];
    }
}
void print(char stack[]){
    for(int i=0;i<=top;i++){
        printf("%c ",stack[i]);
    }
    printf("\n");
}
int main()
{
char arr[100];
scanf("%s",arr);
int size=strlen(arr);
char stack[size];
int flag=1;
for(int i=0;i<size;i++){
   if(arr[i]=='{' || arr[i]=='(' || arr[i]=='['){
       push(stack,size,arr[i]);
   }
   else{
       if(arr[i]=='}'){
           if(peek(stack)==-1){
               flag=0;
               break;
           }
           else{
               if(peek(stack)!='{'){
                   flag=0;
                   break;
               }
               else{
                   pop(stack);
               }
           }
       }

        else if(arr[i]==')'){
           if(peek(stack)==-1){
               flag=0;
               break;
           }
           else{
               if(peek(stack)!='('){
                   flag=0;
                   break;
               }
               else{
                   pop(stack);
               }
           }
       }
        else if(arr[i]==']'){
           if(peek(stack)==-1){
               flag=0;
               break;
           }
           else{
               if(peek(stack)!='['){
                   flag=0;
                   break;
               }
               else{
                   pop(stack);
               }
           }
       }
   }
}
if(top!=-1){
    flag=0;
}
if(flag==1){
    printf("Balanced");
}
else{
    printf("UnBalanced");
}
}