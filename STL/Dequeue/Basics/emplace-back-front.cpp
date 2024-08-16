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
    cout << "Deque before emplace: " << endl;
    display(dt);

    dt.emplace_front(9);
    cout << "Deque before emplace_front: " << endl;
    display(dt);

    dt.emplace_back(9);
    cout << "Deque before emplace_back: " << endl;
    display(dt);
    return 0;
}