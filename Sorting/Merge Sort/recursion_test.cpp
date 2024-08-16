#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void answer(int *arr,int n,int i){
    if(i <= 0){
        return;
    }
    cout << "Value of i: " << i << endl;
    display(arr,i);
    answer(arr,n,i-1);
    cout << "Value of i: " << i << endl;
    display(arr,i);
}

int main(){
    int arr[4] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    answer(arr,size,size);
    return 0;
}