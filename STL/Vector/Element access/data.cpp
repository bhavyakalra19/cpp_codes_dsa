#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    for(int i = 0; i<5; i++){
        v1.push_back(i*10);
    }
    int *pos = v1.data();// Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    cout << *pos << endl;// Prints data at positon 0 in vector
    cout << pos << endl;
    // pos++;
    // cout << *pos << endl;// Prints data at position 1 in vector
    // cout << pos << endl;

    for(int i = 0; i< v1.size(); i++){
        cout << *(pos + i) << endl;
    }
    return 0;
}