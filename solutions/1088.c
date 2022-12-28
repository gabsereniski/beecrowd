#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> 

int merge(int arr[], int temp[], int left, int mid, int right)
{
	int i, j, k;
	int inv_count = 0;
 
	i = left; /* i is index for left subarray*/
	j = mid;  /* j is index for right subarray*/
	k = left; /* k is index for resultant merged subarray*/
	while ((i <= mid - 1) && (j <= right))
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		
		else
		{
			temp[k++] = arr[j++];
			inv_count = inv_count + (mid - i);
		}
	}
 
	while (i <= mid - 1)
		temp[k++] = arr[i++];
 
	while (j <= right)
		temp[k++] = arr[j++];
 
	for (i=left; i <= right; i++)
		arr[i] = temp[i];
 
	return inv_count;
}

int _mergeSort(int arr[], int temp[], int left, int right)
{
	int mid, inv_count = 0;
	if (right > left)
	{

		mid = (right + left)/2;
 
		inv_count  = _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid+1, right);
 
		inv_count += merge(arr, temp, left, mid+1, right);
	}
	
	return inv_count;
} 

int mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
} 
int main()
{
	int n;
	while(scanf("%d",&n),n)
	{
		int arr[100002], i;
		for(i = 0 ; i < n ; i++)
			scanf("%d",&arr[i]);
		
		if(mergeSort(arr,n)%2)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
	}	

	return 0;
}
