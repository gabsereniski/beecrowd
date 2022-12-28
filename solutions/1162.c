//1162
#include <stdio.h>
#include <limits.h>

int swaps;

void merge(int v[], int low, int mid, int high)
{
	int n1 = (mid - low) + 1;
	int n2 = high - mid;
	int i = 0, j = 0, k;
	int left[n1 + 1], right[n2 + 1];
	
	for(i=0; i < n1; i++)
		left[i] = v[low + i];
	
	for(j = 0; j < n2; j++)
		right[j]=v[mid + 1 + j];
	
	left[n1] = INT_MAX, right[n2] = INT_MAX;
	
	i = j = 0;
	
	for(k = low; k <= high; k++)
	{
		if(left[i] <= right[j])
			v[k] = left[i++];
		
		else
		{
			v[k] = right[j++];
			swaps += (mid + 1) - (low + i);
		}
	}
	
}

void _mergesort(int v[], int low, int high)
{
	if(low < high)
	{
		int mid = (low + high) / 2;
		
		_mergesort(v, low, mid);
		_mergesort(v, mid + 1, high);
		merge(v, low, mid, high);
	}
}

void mergeSort(int v[], int size)
{
	_mergesort(v, 0, size-1);
}

int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		int vs;
		
		scanf("%d",&vs);
		
		int v[vs], i;
		
		for(i = 0; i < vs; i++)
			scanf("%d",&v[i]);
			
		swaps = 0;
		
		mergeSort(v, vs);
		
		printf("Optimal train swapping takes %d swaps.\n", swaps);
	}
	
	return 0;
}