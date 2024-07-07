#include<stdio.h>
void sort(int ar[],int n);
void swap(int *a,int *b);
int binary_search(int ar[],int s,int e,int se);
int main()
{
	int n,ar[100],i;
	printf("enter no of element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element to index %d :",i);
		scanf("%d",&ar[i]);
	}
	sort(ar,n);
	for(i=0;i<n;i++)
	{
	printf("%d",ar[i]);}
	int se;
	printf("enter the serach key");
	scanf("%d",&se);
	printf("%d",binary_search(ar,0,n-1,se));
		
}
void sort(int ar[],int n)
{
	int min,i,j;
	for(i=0;i<n;i+=1)
	{
		min=i;
		for(j=i+1;j<n;j+=1)
		{
			if (ar[min]>ar[j])
			{
				min=j;
			}
			swap(&ar[i],&ar[min]);
		}
	}
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int binary_search(int ar[],int s,int e,int se)
{
	if(s<=e)
	{
		int mid=(s+e)/2;
		if(ar[mid]==se)
		{
			return mid;
		}
		else if(ar[mid]>se)
		{
			return binary_search(ar,l,mid-1,se);
		}
		else
		{
			return binary_search(ar,mid+1,e,se);
		}
	}
	else
	{	return -1;
	}
}
