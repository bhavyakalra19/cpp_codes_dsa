#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<char> dt = {'B','h','v','y','a'};
    auto it = dt.begin();
    advance(it,2);
    dt.emplace(it,'a');
    cout << "Name after insertion" << endl;
    for(auto i : dt){
        cout << i;
    }
    cout << endl;
    return 0;
}