#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
       for(auto it = nums.begin(); it != nums.end(); it++){
            if(it!= nums.begin() && *it == *(it-1)){
                nums.erase(it);
                it--;
            }
       }
       return nums.size();
    }
};
int main(){
    Solution sl;
    vector<int> v1 = {0,0,1,1,1,2,2,3,3,4};
    int a = sl.removeDuplicates(v1);
    for(auto i:v1){
        cout << i << " "; 
    }
    cout << endl << a << endl;
    return 0;
}