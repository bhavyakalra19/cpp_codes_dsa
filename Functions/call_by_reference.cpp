//When we call function by passing refrence of variable it reflects after fucntion is over
#include<bits/stdc++.h>

using namespace std;

void reference(int *x, int *y){
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main(){
    int x = 100;
    int y = 50;
    reference(&x, &y);
    cout << x << " " << y << endl;
}