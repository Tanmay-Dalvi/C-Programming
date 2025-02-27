#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;
    m[1]="one";
    m[2]="two";
    m[3]="three";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m[2];
}