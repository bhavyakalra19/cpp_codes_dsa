#include<bits/stdc++.h>

using namespace std;

void display(set<int> st){
    for(auto i : st){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    set<int> st;
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(3);

    cout << "Displaying set before erasing any element from set" << endl;
    display(st);

    st.erase(3);
    cout << "Displaying set affter erasing 3 from set" << endl;
    display(st);
    return 0;
}