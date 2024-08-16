#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[5];
    int *arr1[5];
    cout << "Enter 5 value for array" << endl;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < arr_size; i++){
        cin >> arr[i];
    }
    for(int j=0; j<arr_size; j++){
        arr1[j] = &arr[j];
    }
    int *ptr;
    ptr = arr;
    cout << *ptr << endl;
    cout << *arr << endl;
    cout << ptr << endl;
    cout << arr << endl;
    cout << "....................." << endl;
    for(int j=0; j<arr_size; j++){
        cout << arr1[j] << endl;
    }
    return 0;
}