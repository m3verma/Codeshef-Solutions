#include<stdio.h>
int main()
{
    char a[10000];
    int t,n,z,i;
    scanf("%d",&t);
    while(t--)
    {
        z=0;
        scanf("%d",&n);
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]!='N')
            {
                if(a[i]=='Y')
                {
                    printf("NOT INDIAN\n");
                    z=1;
                    break;
                }
                else if(a[i]=='I')
                {
                    printf("INDIAN\n");
                    z=1;
                    break;
                }

            }
        }
        if(z==0)
            printf("NOT SURE\n");


    }


    return 0;
}
