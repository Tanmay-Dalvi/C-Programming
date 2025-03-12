#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    

    int k;
    cout<<"Enter the second number: ";
    cin>>k;
    

    for(int i=1;i<=10;i++)
    {
        int result = n * i;
        cout<<n<< "*"<<i<<"="<<result<<endl;

    }

    cout<<"\n\n";

    for(int i=1;i<=10;i++)
    {
        int result = k * i;
        cout<<k<< "*"<<i<<"="<<result<<endl;
        
    }

    return 0;


}