#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int val=1;
    int l=0,u=0,r=n-1,b=n-1;
    while(u<=b && l<=r){
        for(int i=l;i<=r;i++){
            arr[u][i]=val++;
        }
        u++;
        for(int i=u;i<=b;i++){
            arr[i][r]=val++;
        }
        r--;
        for(int i=r;i>=l;i--){
            arr[b][i]=val++;
        }
        b--;
        for(int i=b;i>=u;i--){
            arr[i][l]=val++;
        }
        l++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}