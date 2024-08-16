#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> l1{1,2,3,4,5,6};
    cout << l1.front() << endl;
    cout << l1.back() << endl;
    
    cout << "Displaying data of list using begin() and end() iterators" << endl;

    for(auto it = l1.begin(); it != l1.end(); it ++){
        cout << *it << endl;
    }
    return 0;
}

// same we can do for rbegin() rend()
// same we can do for cbegin() cend()
// same we can do for crbegin() crend()