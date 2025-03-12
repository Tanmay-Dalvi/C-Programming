#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v={10, 20, 30, 40, 50};
    v[1]=70;
    for(int i:v){
        cout<<i<<" ";
    }
}