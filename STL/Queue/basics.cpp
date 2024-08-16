#include<bits/stdc++.h>

using namespace std;

void show_queue(queue<int> qu){
    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;
}

int main(){
    queue<int> qu;
    qu.push(3);
    qu.push(4);
    qu.push(5);
    qu.emplace(6);

    show_queue(qu);
    cout << "The size of queue is: " << qu.size() << endl;
    cout << "The front element of queue is: " << qu.front() << endl;
    cout << "The back element of queue is: " << qu.back() << endl;


    queue<int> qu2;
    qu2.push(4);
    qu2.push(10);
    cout << "Data of queue 2 before swaping" << endl;
    show_queue(qu2);


    qu.swap(qu2);
    cout << "Data of queue 1 after swap: " << endl;
    show_queue(qu);

    cout << "Data of queue 2 after swap: " << endl;
    show_queue(qu2);
    return 0;
}