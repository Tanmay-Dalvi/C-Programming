#include<stdio.h>
struct pointer1{
    int x,y;

};

int main()
{
      struct pointer1 p1={10,20};
      struct pointer1 *ptr=&p1;
      printf("X:%d Y:%d\n",ptr ->x,ptr->y );
      
      
}