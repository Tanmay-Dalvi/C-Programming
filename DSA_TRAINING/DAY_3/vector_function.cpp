#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1, 2 ,3};
    v.push_back(4);
    v.pop_back();
    v.insert(v.begin()+2, 10);
    v.erase(v.begin()+2);
    for(int i:v){
        cout<<i<<" ";
    }
}
