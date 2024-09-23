#include<stdio.h>
#include<stdlib.h>

int selection(int num[],int n)
{
	int k,pos,temp;
	
	for(k=0;k<n;k++)
	{
		pos=small(num,k,n);
		temp=num[k];
		num[k]=num[pos];
		num[pos]=temp;
	}
}

int small(int num[],int k,int n)
{
	int s=num[k],pos=k,i;
	for(i=k+1;i<n;i++)
	{
		if(num[i]<s)
		{
			s=num[i];
			pos=i;
		}
	}
	
	return pos;
}

void main()
{
	int num[10],n,i;
	printf("enter number number of array element:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&num[i]);
	}
	
	selection(num,n);
	
	printf("sorted array:");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
	}
}