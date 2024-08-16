#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> vt;
        if (nums1.size() == 0 && nums2.size() == 0){
            return double(0);
        }

        if (nums1.empty()){
            vt.assign(nums2.begin(),nums2.end());
        }else if (nums2.empty())
        {
            vt.assign(nums1.begin(),nums1.end());
        }else{
            int i = 0, j = 0;
            while (i < nums1.size() && j < nums2.size())
            {
                if (nums1.at(i) < nums2.at(j))
                {
                    vt.push_back(nums1.at(i));
                    i++;
                }
                else
                {
                    vt.push_back(nums2.at(j));
                    j++;
                }
            }
            while (i < nums1.size())
            {
                vt.push_back(nums1.at(i));
                i++;
            }
            while (j < nums2.size())
            {
                vt.push_back(nums2.at(j));
                j++;
            }
        }
            for(auto i : vt){
                cout << i << " ";
            }
            cout << endl;
            
            if (vt.size() % 2 == 0)
            {
                return double(vt.at(vt.size() / 2) + vt.at((vt.size() / 2) - 1)) / double(2);
            }
            else
            {
                return double(vt.at((vt.size() - 1) / 2));
            }
    }
};
int main()
{
    vector<int> num1 = {1,2,3};
    vector<int> num2 = {3,4};
    Solution sl;
    double a = sl.findMedianSortedArrays(num1, num2);
    cout << a << endl;
    return 0;
}