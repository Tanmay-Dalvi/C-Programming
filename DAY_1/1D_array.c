#include<stdio.h>

int main()
{
    //how to declare array at runtime 
    int a[5];    
    printf("Enter array: ");
    for(int i=0;i<5;i++)
    {
        
        scanf(" %d",&a[i]);

    }
    int add=0,max=0,min=a[2];
    
    for (int i=0;i<5;i++)
    {
         if (a[i] < min) { min = a[i]; }
        if (a[i] > max) { max = a[i]; }
        printf(" %d",a[i]);
    }

    printf("\nReverse array\n");
    for(int i=4;i>=0;--i)
    {
        printf(" %d",a[i]);
    }
    printf("\nMinimum: %d\n", min);
    printf("Maximum: %d\n", max);
}