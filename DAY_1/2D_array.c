#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum =0;
    int colsum[3]={0};
    for(int i=0;i<3;i++)
    {
        int rowsum=0;
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
            rowsum += a[i][j];//row wise addtiion 
            colsum[j] += a[i][j];//column wise addition 
            sum += a[i][j];//whole addition 

        }
        printf("Rowise sum: %d",rowsum);//printing rowwise addition 
        printf("\n");
    }
    //for printing column wise addition 
    for(int j=0;j<3;j++)
    {
        printf("%d ",colsum[j]);

    }
    printf(":colum sum ");



    printf("\n\n\n");
    printf("The sum of whole array : %d", sum);//for printing whole array addition

    return 0;

    

}