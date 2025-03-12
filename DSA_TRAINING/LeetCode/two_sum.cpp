#include <iostream>
#include <vector>
#include <unordered_map>  
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int sec = target - first;
            if(m.find(sec) != m.end()) {
                v.push_back(m[sec]);  
                v.push_back(i);       
                break;
            }
            m[first] = i;  
        }
        return v;
    }
};

