#include<stdio.h>
int Binarysearch(int arr[],int n,int key)
{
	int low=0, high=n-1, mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		return mid;
		//Element found 
		else if(arr[mid]<key)
		low=mid+1;
		//Search right half
		else
		high=mid-1;
		//Search left half
	}
	return 1;
	//Element not found
}
int main()
{
	int n,key,result;
	printf("Enter number of elements:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d sorted elements:\n",n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	printf("Enter element to search:");
	scanf("%d", &key);
	int Binarysearch(int arr[],int n,int key);
	if(result !=-1)
	printf("Element found at index %d\n",result);
	else
	printf("Element not found\n");
return 0;
}
