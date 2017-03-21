#include<stdio.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 =  r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	   are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	   are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l+(r-l)/2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}
int main()
{
	int n,num[1000000];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	int j,l;
	mergeSort(num,0,n-1);
	int q;
	scanf("%d",&q);
	int quer;
	for(i=0;i<q;i++)
	{
		int low=0;
		int high=n;
		int mid=(high+low)/2;
		scanf("%d",&quer);
		while(low<=high)
		{
			if(quer<num[0])
			{
				printf("%d\n",num[0]);
				break;
			}
			else if(quer>num[n-1])
			{
				printf("0\n");
				break;
			}
			else if(quer==num[mid])
			{
				printf("%d\n",num[mid]);
				break;
			}
			else if(quer>num[mid])
			{
				low=mid+1;
				if(quer<num[mid+1] && quer>num[mid])
				{
					printf("%d\n",num[mid+1]);
					break;
				}
			}
			else if(quer<num[mid])
			{
				high=mid-1;
				if(quer>num[mid-1]&& quer<num[mid])
				{
					printf("%d\n",num[mid]);
					break;
				}
			}
			mid=(high+low)/2;
		}	
	}
	return 0;
}
