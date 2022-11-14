#include<stdio.h>
int missingele(int arr[],int n)
{
	int i;
	int m=n+1; //the actual size is n+1 since a number is missing from the array
	int total=m*(m+1)/2; //get a sum of intergers between a abd n+1
	int sum=0; //get an actual sum of integers in the array
	for(i=0;i<n;i++)
	{
		sum = sum+arr[i];
	}
	return total-sum; //The missing number is the difference between the expected sum and the actual sum
}
int main()
{
	int arr[]={1,2,3,4,5,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("The missing element is %d",missingele(arr,n));
	return 0;
