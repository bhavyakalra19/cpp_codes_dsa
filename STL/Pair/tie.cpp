#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<string,int> p1("bhavya",9);
    string s;
    int b;
    tie(s,b) = p1;
    cout << s << " " << b << endl;

    int x;
    tie(ignore,x) = p1;
    cout << x << endl;
    return 0;
}