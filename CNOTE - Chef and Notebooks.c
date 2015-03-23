#include<stdio.h>
int main()
{
    long long int i,t,x,y,k,n,flag=0,p,c;
    scanf("%lld",&t);
    while(t--)
    {
        flag=0;
        scanf("%lld%lld%lld%lld",&x,&y,&k,&n);
        x=x-y;
        if(x<=0)
            flag=1;
        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&p,&c);
            if(c<=k)
                if(p>=x)
                flag=1;
        }
        if(flag==1)
        printf("LuckyChef\n");
        else
        printf("UnluckyChef\n");
 
    }
 
 
    return 0;
}