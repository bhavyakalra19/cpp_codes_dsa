#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    st.insert(4);
    st.insert(5);
    st.emplace(6);
    st.emplace(7);
    st.emplace(9);

    auto it = st.lower_bound(6); // If element is present iterator points to that position
    cout << "Pointer value: " << *it << endl; 

    it = st.lower_bound(8); // If element is not present iterator points to its greater element
    cout << "Pointer value: " << *it << endl;
    return 0;
}