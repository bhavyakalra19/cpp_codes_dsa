#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
};


int main(){
    vector<int> v{1,2,3,4};
    Solution sl;
    v = sl.twoSum(v,6);
    for(auto it=v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}