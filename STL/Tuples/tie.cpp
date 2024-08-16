#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    float b;
    double c;
    tuple<int,float,double> s;

    s = make_tuple(4,5,6);

    tie(a,ignore,ignore) = s;
    cout << a << " " << b << " " << c << endl;

    tie(a,b,c) = d;
    cout << a << " " << b << " " << c << endl;
    return 0;
}