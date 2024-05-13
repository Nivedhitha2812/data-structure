#include<stdio.h>
int main()
{
	int i,n,a[10],sum=0;
	printf("enter number of element:");
	scanf("%d",&n);
	printf("enter an element:");
	for (int i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sum of element");
	for(int i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
    return 0;
}
