#include<iostream>
using namespace std;

long long  factorial(long long n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return  n * factorial(n-1);
    }
}

int main()
{
    long long num;
    cout<<"Enter number you want factorial: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<< factorial(num) << endl;
    return 0;
}