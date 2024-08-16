#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(6);

    auto it  = st.begin();
    it = st.emplace_hint(it,5); // It returns pointer to the inserted array in the set (if it's not in the set otherwise it will points to previous position)
    cout << *it << endl;
    return 0;
}