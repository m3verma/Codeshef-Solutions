#include<stdio.h>
int main()
{
    long long int t,n,k,l,i,ans[10000]={0},c;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld%lld%lld",&n,&k,&l);
        for(i=0;i<=n;i++)
            ans[i]=0;
        c=n-1;
        l--;
        while(l>0)
        {
            i=l%k;
            ans[c]=i;
            c--;
            l/=k;
        }
        for(i=0;i<n;i++)
            printf("%lld ",ans[i]+1);
            printf("\n");



    }

    return 0;
}
