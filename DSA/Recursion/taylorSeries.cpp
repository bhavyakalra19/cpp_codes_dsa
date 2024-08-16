#include<bits/stdc++.h>

using namespace std;

double e(int x, int n){
    static double p = 1, f = 1;
    double r;
    if(n == 0){
        return 1;
    }
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r + (p/f);
}

int hornerE(int x,int n){
    static int s = 1;
    if(n == 0){
        return s;
    }
    s = 1 + (x/n * s);
    return e(x,n-1);
}

int main(){
    cout << e(4,5) << endl;
    cout << hornerE(4,5) << endl;
    return 0;
}