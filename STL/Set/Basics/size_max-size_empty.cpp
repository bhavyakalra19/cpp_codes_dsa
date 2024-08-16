#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    cout << "Checking if set is empty or not if 1 then set is empty otherwise it displays 0. So set is: " << st.empty() << endl;
    cout << "The size of set is: " << st.size() << endl;
    cout << "The max size of set is: " << st.max_size() << endl;

    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);

    cout << "Checking if set is empty or not after inserting data. If 1 then set is empty otherwise it displays 0. So set is: " << st.empty() << endl;
    cout << "The size of set is after inserting data is: " << st.size() << endl;
    return 0;
}