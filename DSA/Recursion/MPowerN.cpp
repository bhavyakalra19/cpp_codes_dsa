#include<bits/stdc++.h>

using namespace std;

int power(int m, int n){
    if(n == 0){
        return 1;
    }

    return power(m,n-1) * m;
}

int powerSecond(int m, int n){
    if(n==0){
        return 1;
    }
    
    if(n%2 == 0){
        return powerSecond(m*m, n/2);
    }else{
        return m * powerSecond(m*m,(n-1)/2);
    }
}

int main(){
    int x = 2;
    cout << power(x,6) << endl;
    cout << powerSecond(x,6) << endl;
    return 0;
}