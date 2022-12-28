//2539
#include <bits/stdc++.h>
using namespace std;

#define M 100002

long long n;
long long st[4*M];
/*
void insert(long long i, long long node = 1, long long b = 0, long long e = n)
{
	if(i < b || i > e)	return;
	if(b == e) 			return void(st[node] = 1);

	long long mid = (b + e)/2;
	long long l = 2*node, r = 2*node + 1;
	
	insert(i, l, b, mid), insert(i, r, mid + 1, e);
	
	st[node] = st[l] + st[r];
}

long long count(long long i, long long j, long long node = 1, long long b = 0, long long e = n)
{
	if(j < b || i > e) 	 return 0;
	if(i <= b && j >= e) return st[node];
	
	long long mid = (b + e)/2;
	long long l = 2*node, r = 2*node + 1;
	
	return count(i, j, l, b, mid) + count(i, j, r, mid + 1, e);
}
*/



 
 //-----------------------------------------------------------------//



 
/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
  long long i, j, k;
  long long inv_count = 0;
 
  i = left; /* i is index for left subarray*/
  j = mid;  /* j is index for right subarray*/
  k = left; /* k is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
 
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
 
  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
 
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}


 
/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
long long _mergeSort(long long arr[], long long temp[], long long left, long long right)
{
  long long mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array long longo two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;
 
    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
 
    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}


/* This function sorts the input array and returns the
   number of inversions in the array */
long long mergeSort(long long arr[], long long array_size)
{
    long long *temp = (long long *)malloc(sizeof(long long)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}


int main()
{
	while(scanf("%lld", &n) != EOF)
	{
		long long v[n];
		
		for(long long i = 0; i < n; i++)
		{			
			long long s; scanf("%lld", &s);
			v[i] = -s;
		}
		
		printf("%lld\n", mergeSort(v, n));
	}
}