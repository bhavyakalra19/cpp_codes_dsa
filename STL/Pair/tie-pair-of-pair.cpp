#include<bits/stdc++.h>

using namespace std;

void tie_pair(pair<int,pair<int,int>> pr){
    int a,b,c;
    tie(a,ignore) = pr;
    tie(b,c) = pr.second;
    cout << a << " " << b << " " << c << " " << endl;
}

int main(){
    pair<int,pair<int,int>> p1;
    p1.first = 4;
    p1.second = make_pair(5,6);
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    tie_pair(p1);
    return 0;
}

