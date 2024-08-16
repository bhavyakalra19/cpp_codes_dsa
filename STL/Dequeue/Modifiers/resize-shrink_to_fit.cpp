#include<bits/stdc++.h>

using namespace std;

void display(deque<int> dt){
    for(auto i : dt){
        cout << i << " ";
    }
    cout << endl;
}

void resize_second(deque<int> dt){
    dt.resize(20,9); // Fill extra spaces with 9
    cout << "Deque after resize in resize_second" << endl;
    display(dt);
}

int main(){
    deque<int> dt = {1,2,3,4,5,6,7};
    display(dt);
    resize_second(dt);
    cout << "Deque size before resize " << dt.size() << endl;
    dt.resize(4);
    cout << "Deque size after resize and before shrink_to_fit " << dt.size() << endl;
    dt.shrink_to_fit();
    cout << "Deque size after resize and after shrink_to_fit " << dt.size() << endl;
    cout << "Deque now" << endl;
    display(dt);
    return 0;
}