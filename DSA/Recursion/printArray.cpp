#include<bits/stdc++.h>
using namespace std;

void display(int *arr, int n){
    if(n>0){
        display(arr,n-1);
        cout << arr[n-1] << endl;
    }
}

void printArray(int *arr, int n){
    if(n==0){
        return;
    }
    printArray(arr,n-1);
    cout << arr[n-1] << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    return 0;
}