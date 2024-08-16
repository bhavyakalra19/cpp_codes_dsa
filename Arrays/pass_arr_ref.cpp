#include<bits/stdc++.h>

using namespace std;

int* func_one(int *arr){
    *arr = *arr + 1;
    return arr;
}

int main(){
    int arr[5] = {6,2,3,4,5};
    int *pos;
    pos = func_one(arr);
    cout << *pos << endl;
    return 0;
}