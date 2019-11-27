#include<stdio.h>
int main()
{
    int N, print, line, col;
    scanf("%d",&N);
    for(line=0;line<N;printf("\n"),line+=2)
    {
        print=N*line+1;
        for(col=1;col<=N;col++)
            printf("%02d ",print++);
    }
    /*if(N%2==0)
        line=N-1;
    else
        line=N-2;*/
    for(line=N/2+1;line>=0;printf("\n"),line-=2)
    {
        print=N*line+1;
        for(col=1;col<=N;col++)
            printf("%02d ",print++);
    }
    return 0;
}
