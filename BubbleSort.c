#include<stdio.h>

int i=0,j=0,num[10],n,temp;

int main()
{

    int flag=0;
    printf("enter element in array:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("enter array element:");
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
        if(flag==0);
       
    }

    printf("the array sorted in asending order:");

    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    
    return 0;
}
