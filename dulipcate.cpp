#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,4,5,5};
	int length= sizeof(arr)/sizeof(arr[0]);
	printf("Duplicate elements are: \n");
	for(int i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(arr[i]==arr[j])
			printf("%d\n",arr[j]);
		}
	}
	return 0;
}

