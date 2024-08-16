#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int k =0;

        for (int i = 0; i < s.length(); i++){
            vector<bool> visit(256);
            for(int j = 0; j < s.length(); j++){
                if(visit[s[j]] == true){
                     break;
                }else{
                    k = max(k,j-i+1);
                    visit[s[j]] = true;
                }
            }
        }
        return k;
    }
};

int main()
{
    Solution st;
    cout << st.lengthOfLongestSubstring("ahxvya") << endl;
    return 0;
}