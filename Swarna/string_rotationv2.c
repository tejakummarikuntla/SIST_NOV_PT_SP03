#include<stdio.h>
void reverse_string(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void rotate_string(char str[], int nor, int len)
{
    //reverse_string(str, 0, len-1);
    reverse_string(str, 0, nor-1);
    reverse_string(str, nor, len-1);
    reverse_string(str, 0, len-1);
}
int main()
{
    char str[]="abcdefghijklmnopqrstuvwxyz", temp;
    int nor=965, len;
    for(len=0;str[len];len++);
    nor=nor%len;
    rotate_string(str, nor, len);
    printf("%s\n",str);

    return 0;
}
