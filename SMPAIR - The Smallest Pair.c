#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
    int n, num1, num2, i, j, test, temp;
    unsigned long long int sum;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%d", &n);
        scanf("%d", &num1);
        scanf("%d", &num2);
        n=n-2;
        while(n--)
        {
            scanf("%d", &temp);
            if(temp<num1)
            {
            	if (num2>num1) num2=num1;
                num1=temp;
                continue;
            }
            if(temp<num2)
            {
                num2=temp;
            }
        }
        sum=num1+num2;
        printf("%llu\n", sum);
    }
return 0;
}  