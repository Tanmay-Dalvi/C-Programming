#include<iostream>
using namespace std;

int printsum(int n)
{
    if(n==1)  
    {
        return 1;
    }
    else
    {
        return n + printsum(n-1);
    }
}

int main()
{
    int num;
    cout<<"Enter the number you want sum: ";
    cin>>num;
    cout<<"Sum of numbers up to "<<num<<" is "<< printsum(num) << endl;
}