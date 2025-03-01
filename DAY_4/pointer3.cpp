#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr = 25;
    printf("Value of allocated : %d",*ptr);
    free(ptr);
}