#include<bits/stdc++.h>

using namespace std;


void func_one(int *ptr){
    cout << *ptr << endl;
    ptr = ptr + 1;
    cout << *ptr << endl;
}

int main(){
    int arr[4] = {2,9,5,6};
    *arr = *arr + 1;
    cout << *arr << endl;
    func_one(arr);
    return 0;
}