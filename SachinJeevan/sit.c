#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int limit =sqrt(n);
    int flag=1;
    if(n%2==0 || n%3==0){
        flag=0;
    }
    int upper=6*k+1;
    int lower=6*k-1;
    while(flag==1 && (upper<=limit || lower<=limit)){
        if(n%upper==0 || n%lower==0){
            flag=0;
        }
        k++;
        upper=6*k+1;
        lower=6*k-1;
    }
    if(flag==0){
        printf("It is not a prime number");
    }
    else{
        printf("It is a prime number");
    }
}