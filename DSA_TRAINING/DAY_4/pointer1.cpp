#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;
    int **p1=&p;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",**p1);


}