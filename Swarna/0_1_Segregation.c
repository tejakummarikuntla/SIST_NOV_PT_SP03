#include<stdio.h>
int main()
{
    int arr[]={0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,0};
    int always, asuwish, noe, temp;
    noe=sizeof(arr)/sizeof(arr[0]);
    for(always=0,asuwish=0;always<noe;always++)
    {
        if(arr[always]==0&&arr[asuwish]==1)
        {
            temp=arr[always];
            arr[always]=arr[asuwish];
            arr[asuwish]=temp;
        }
        if(arr[asuwish]==0)
            asuwish++;
    }
    for(always=0;always<noe;printf("%d ",arr[always++]));
    return 0;
}
