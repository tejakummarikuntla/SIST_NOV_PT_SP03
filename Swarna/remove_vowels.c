#include<stdio.h>
#define isVowel(ch) (ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')
int main()
{
    char str[]="write a program to remove vowels from this sentence";
    int always, asuwish;
    for(always=0,asuwish=0;str[always];always++)
    {
        if(!(isVowel(str[always])))
            str[asuwish++]=str[always];
    }
    str[asuwish]='\0';
    printf("%s",str);
    return 0;
}
