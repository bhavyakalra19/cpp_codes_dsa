#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(6);
    pq.push(4);
    pq.push(9);
    pq.push(1);

    //Priority queue inserts element with high value

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}