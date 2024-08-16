#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<int> dt = {1,2,3,4,5,6,7,8,9};
    
    for(int i = 0; i < dt.size(); i++){
        cout << dt.operator[](i) << " ";
    }
    cout << endl;
    return 0;
}