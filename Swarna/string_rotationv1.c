#include<stdio.h>
int main()
{
    char str[]="abcdefghijklmnopqrstuvwxyz", temp;
    int nor=965, index;
    int len, end;
    for(len=0;str[len];len++);
    end=len-1;
    nor=nor%len;
    while(nor>0)
    {
        temp=str[end];
        for(index=end;index>=0;index--)
            str[index]=str[index-1];
        str[0]=temp;
        nor--;
    }
    printf("%s\n",str);

    return 0;
}
