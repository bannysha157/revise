#include<stdio.h>
#define SIZE 50
void copyarray(int[],int[],int);
void main()
{
	int src[SIZE],dest[SIZE],i,n;
	printf("Enter size of the array:");
	scanf("%d",&n);
	printf("Enter elements of source array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&src[i]);
	}
	void (*fp)(int[],int[],int)=copyarray;
	fp(src,dest,n);
}
void copyarray(int src[],int dest[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		dest[i]=src[i];
		
	}
	printf("Elements of source array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",src[i]);
	}
	printf("\nElements of destination array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",dest[i]);
	}
}
