#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);

    cout << st.count(4) << endl; // Returns 1 as 4 is present in the set
    cout << st.count(5) << endl; // Returns 0 as 5 is not present in the set
    return 0;
}