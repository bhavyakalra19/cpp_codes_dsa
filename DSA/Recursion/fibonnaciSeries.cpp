#include<bits/stdc++.h>

using namespace std;

int F[10];
int fibSer(int n){
    if(n <= 1){
        F[n] = n;
        return n;
    }

    if(((n-2) != 0) && F[n-2] == 0){
        F[n-2] = fibSer(n-2);
    }
    if(((n-1) != 0) && F[n-1] == 0){
        F[n-1] = fibSer(n-1);
    }

    return (F[n-2] + F[n-1]);
}

int fib(int n){
    static map<int,int> mp;
    if(n<=1){
        mp[n] = n;
        return n;
    }
    if(!mp[n-2]){
        mp[n-2] = fib(n-2);
    }
    if(!mp[n-1]){
        mp[n-1] = fib(n-1);
    }
    return mp[n-2] + mp[n-1];
}

int main(){
    cout << fib(6) << endl;
    return 0;
}