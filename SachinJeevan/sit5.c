#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int dp[n][k+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<k+1;j++){
            if(j==0){
                dp[i][j]=1;
            }
            else if(i==0){
                if(arr[i]==j){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }

            }
            else{
                if(arr[i]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i]];
                }
            }
           
        }
    }
     for(int i=0;i<n;i++){
                for(int j=0;j<k+1;j++){
                    printf("%d ",dp[i][j]);
                }
                printf("\n");
            }
}