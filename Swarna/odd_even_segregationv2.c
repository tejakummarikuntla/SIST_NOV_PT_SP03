#include<stdio.h>
int main()
{
    int arr[]={15,12,2,4,6,13,37,68,89,98,86,100,99};
    int always, asuwish, noe, temp, index;
    noe=sizeof(arr)/sizeof(arr[0]);
    for(always=0;always<noe;printf("%d ",arr[always++]));
    for(always=0,asuwish=0;always<noe;always++)
    {
        if(arr[always]%2!=0&&arr[asuwish]%2==0)
        {
            temp=arr[always];
            for(index=always;index>=asuwish;index--)
                arr[index]=arr[index-1];
            arr[asuwish]=temp;
        }
        if(arr[asuwish]%2!=0)
            asuwish++;
    }
    for(always=0,printf("\n");always<noe;printf("%d ",arr[always++]));
    return 0;
}
