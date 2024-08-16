#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    st.insert(4);
    st.insert(5);
    st.emplace(6);
    st.emplace(7);
    st.emplace(9);

    auto it = st.upper_bound(4); // If element is present iterator points to its upper position
    cout << "Pointer value: " << *it << endl; 

    it = st.upper_bound(8); // If element is not present then also iterator points to its upper element
    cout << "Pointer value: " << *it << endl;
    return 0;
}