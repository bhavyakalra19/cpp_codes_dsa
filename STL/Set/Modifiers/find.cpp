#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(3);

    auto pos = st.find(8);
    cout << *pos << endl;
    return 0;
}