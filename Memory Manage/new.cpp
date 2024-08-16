#include<bits/stdc++.h>

using namespace std;

void fun_one(){
    int size;
    cout << "Enter array size" << endl;
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size ; i++){
        cout << "Enter variable number:" << i+1 << endl;
        cin >> arr[i];
    }
    cout << "The entered variables are: ";
    for(int j = 0; j < size ; j++){
        cout << *(arr+j) << ";";
    }
    cout << endl;
    delete[] arr;
    for(int j = 0; j < size ; j++){
        cout << arr[j] << ";";
    }
    cout << endl;
}

int main(){
    fun_one();
    return 0;
}