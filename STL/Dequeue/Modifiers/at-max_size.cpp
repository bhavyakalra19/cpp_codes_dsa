#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<int> dt = {1,2,3,4,5,6,7};

    for(int i=0;i<dt.size();i++){
        cout << dt.at(i) << " ";
    }
    cout << endl;

    cout << "Max size of deque is: " << dt.max_size() << endl;
    return 0;
}