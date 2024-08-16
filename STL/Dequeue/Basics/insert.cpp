#include<bits/stdc++.h>

using namespace std;

void display(deque<int> dt){
    for(auto i : dt){
        cout << i << " ";
    }
    cout << endl;
}

void insert_one(deque<int> dt){
    auto it = dt.begin();
    advance(it,2);
    dt.insert(it,9); // it will insert 9 after position 2
    cout << "Deque after insert_one" << endl;
    display(dt);
}

void insert_two(deque<int> dt){
    auto it = dt.begin();
    advance(it,4);
    dt.insert(it,4,9); // It will insert four 9 after position 4
    cout << "Deque after insert_two" << endl;
    display(dt);
}

int main(){
    deque<int> dt = {1,2,3,4,5,6};
    cout << "Deque before any insert operation" << endl;
    display(dt);
    insert_one(dt);
    insert_two(dt);
    return 0;
}