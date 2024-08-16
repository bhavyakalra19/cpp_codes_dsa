#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 7890, count = 0;
    while(count == 0){
        cout << x%10 << endl;
        x = x/10;
        if(x%10 == 0){
            count = 1;
        }
    }
    return 0;
}