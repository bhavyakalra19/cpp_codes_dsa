#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(8);

    pair<set<int>::iterator,set<int>::iterator> pr;
    pr = st.equal_range(6);

    cout << *pr.first << endl;
    cout << *pr.second << endl;
    return 0;
}