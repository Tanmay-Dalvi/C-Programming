#include<iostream>
using namespace std;

void printname(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<" ";
    printname(n-1);
}

int main()
{
    int n;
    cin>>n;
    printname(n);
}