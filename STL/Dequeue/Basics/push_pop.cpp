#include<bits/stdc++.h>

using namespace std;

void display(deque<int> dt){
    for(auto i : dt){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int> dt = {1,2,3,4,5};
    display(dt);
    
    dt.push_back(9);
    display(dt);

    dt.push_front(9);
    display(dt);

    dt.pop_back();
    display(dt);

    dt.pop_front();
    display(dt);
    return 0;
}