#include<bits/stdc++.h>

using namespace std;

int main(){
    set<string> st;
    st.insert("bhavya");
    st.insert("china");
    st.insert("answer");
    st.insert("sets");

    cout << "It will display the set in ascending order" << endl;
    for(auto i : st){
        cout << i << endl;
    }
    return 0;
}