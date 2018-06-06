#include<stdio.h>

void qs(int a[],int p,int r)
{
	if(p<r)
	{
		int q=par(a,p,r);
		qs(a,p,q-1);
		qs(a,q+1,r);
	}
}

int par(int a[],int p,int r)
{
	int piv,j,i,temp;
	
	piv=a[r];
	
	j=p-1;
	
	for(i=p;i<r;i++)
	{
		if(a[i]<=piv)
		{
			j=j+1;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	
	temp=a[j+1];
	a[j+1]=a[r];
	a[r]=temp;
	return j+1;
}

int main()
{
	int i,n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	qs(arr,0,n-1);
	
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
	
}


