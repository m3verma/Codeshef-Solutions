#include <stdio.h>
void quick_sort(long long arr[100000],int,int);
 
int main(void) {
	int t,n,no2=0,no3=0,i;
	long long int a[100000],chef=0,largest;
	scanf("%d",&t);
	while(t)
	{
		chef=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		quick_sort(a,0,n-1);
		for(i=n-1;i>=0;i=i-2)
		chef=chef+a[i];
		printf("%lld\n",chef);
		t--;
	}
	return 0;
}
 
void quick_sort(long long arr[100000],int low,int high)
{
long long pivot,j,temp,i;
if(low<high)
{
pivot = low;
i = low;
j = high;
 
while(i<j)
{
while((arr[i]<=arr[pivot])&&(i<high))
{
i++;
}
 
while(arr[j]>arr[pivot])
{
j--;
}
 
if(i<j)
{ 
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
 
temp=arr[pivot];
arr[pivot]=arr[j];
arr[j]=temp;
quick_sort(arr,low,j-1);
quick_sort(arr,j+1,high);
}
}