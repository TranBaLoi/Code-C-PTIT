#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[1000];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)	printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)	printf("%d ",a[i]);
	}
}
