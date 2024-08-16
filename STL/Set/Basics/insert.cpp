#include<bits/stdc++.h>

using namespace std;

void ascend_set(){
    set<int> st; // ascending order
    st.insert(3);
    st.insert(4);
    st.insert(1);// inserting element in the set 
    st.emplace(7); // it also acts as a insert method 

    cout << "Printing variables in the set" << endl;

    for(auto i : st){
        cout << i << endl;
    }

    cout << "Entering a existing value in the set with asec order" << endl;
    st.insert(7);// It will not be inserted in the set as set doesn't include the duplicate values

    cout << "Printing variables in the set after inserting duplicate data" << endl;

    for(auto i : st){
        cout << i << endl;
    }
}

void desc_set(){
    set<int, greater<int> > st; // ascending order
    st.insert(3);
    st.insert(4);
    st.insert(1);// inserting element in the set 
    st.emplace(7); // it also acts as a insert method 

    cout << "Printing variables in the set with desc order" << endl;

    for(auto i : st){
        cout << i << endl;
    }
}

int main(){
    // ascend_set();
    desc_set();
    return 0;
}