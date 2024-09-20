#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j=0,num[10],n,temp;

    

    printf("enter the number of element in the array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter value of element: ");
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
    }
    printf("the array sored in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    
}