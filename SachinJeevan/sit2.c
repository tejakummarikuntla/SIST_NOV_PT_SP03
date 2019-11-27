#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fn1=8;
    int fn2=2;
    int sum=fn1+fn2;
    int fn=4*fn1+fn2;
    while(fn<=n){
        sum=sum+fn;
        fn2=fn1;
        fn1=fn;
        fn=4*fn1+fn2;
    }
    printf("%d",sum);
}