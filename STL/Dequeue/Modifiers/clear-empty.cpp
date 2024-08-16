#include<bits/stdc++.h>

using namespace std;

void display(deque<int> dt){
    for(auto i : dt){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int> dt= {4,4,4,4};
    cout << "Deque before clear" << endl;
    display(dt);

    if(dt.empty()){
        cout << "Deque is empty at 1" << endl;
    }

    dt.clear();

    if(dt.empty()){
        cout << "Deque is empty at 2" << endl;
    }

    dt.push_back(5);
    dt.push_back(5);
    dt.push_back(5);
    dt.push_back(5);
    dt.push_back(5);
    cout << "Deque after it's cleared and pushed data again" << endl;
    display(dt);
    return 0;
}