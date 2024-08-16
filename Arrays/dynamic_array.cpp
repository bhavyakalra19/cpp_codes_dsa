#include<bits/stdc++.h>

using namespace std;

int* func_get(int *arr){
    for(int i=0;i<5;i++){
        arr[i] = 9;
    }
    return arr;
}

int main(){
    int *arr = new int[5];
    cout << "Enter 5 array values" << endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    arr = func_get(arr);
    
    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }

    delete[] arr;
    cout << "................" << endl;

    //This is dynamic array we can edit its size anytime by deleting previous one
    arr = new int[2];
    for(int i=0;i<2;i++){
        cout << arr[i] << endl;
    }
    return 0;
}