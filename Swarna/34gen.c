int main()
{
    long long int arr[100000];
    int stind, updind, count;
    int n;
    scanf("%d",&n);
    arr[0]=3;
    arr[1]=4;
    count=2;
    stind=0;
    updind=2;
    while(count<=n)
    {
        arr[updind++]=arr[stind]*10LL+3;
        arr[updind++]=arr[stind]*10LL+4;
        stind++;
        count+=2;
    }
    printf("%lld",arr[n-1]);
    return 0;
}
