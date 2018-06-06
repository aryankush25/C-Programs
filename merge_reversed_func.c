#include<stdio.h>

void size(int *s)
{
	printf("Enter Size Of Array\n");
	scanf("%d",*&s);
}

void read_array(int arr[], int s)
{
	int i;
	printf("Enter Values In Array \n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void merge(int arr[],int arr1[],int arr2[],int m,int t)
{
	int i=0,j=0;
	
	for(i=0;i<t;i++)
	{
		if(i<m)
		{
			arr[i]=arr1[i];
		}
		else
		{
			arr[i]=arr2[j];
			j++;
		}
	}
	
}

void display(int arr[],int t)
{
	int i;
	
	printf("-----------------\n");
	
	for(i=0;i<t;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	printf("-----------------\n");
}

void reverse(int arr[],int t)
{
	int i;
	printf("The Reverse Order Is\n");
	
	for(i=t-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	
}

int main()
{
	int i,m,n;
	
	size(&m);
	int arr1[m];
	read_array(arr1,m);
	
	size(&n);
	int arr2[n];
	read_array(arr2,n);
	
	int t=m+n;
	int arr[t];
	
	merge(arr,arr1,arr2,m,t);
	
	display(arr,t);
	
	reverse(arr,t);
	
}
