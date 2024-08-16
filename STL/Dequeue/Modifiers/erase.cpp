#include<bits/stdc++.h>

using namespace std;

void display(deque<int> dt){
    for(auto i : dt){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int> dt={1,2,3,4,5,6,7,8,9};
    display(dt);

    dt.erase(dt.begin()+1);
    display(dt);

    dt.erase(dt.begin(),dt.begin()+2);
    display(dt);
    return 0;
}