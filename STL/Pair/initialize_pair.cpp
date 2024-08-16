#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<char,int> p1; // This is default method to make pair

    pair<string,int> p2("fav",9);
    cout << p2.first << " " << p2.second << endl;

    pair<string,int> p3(p2); // Making copy of a pair
    cout << p3.first << " " << p3.second << endl;

    cout << "Assigning value to a pair p1" << endl;

    p1 = make_pair('B',5);
    cout << p1.first << " " << p1.second << endl;

    p1 = {'B', 9}; //  Another way for above method
    cout << p1.first << " " << p1.second << endl;

    return 0;
}