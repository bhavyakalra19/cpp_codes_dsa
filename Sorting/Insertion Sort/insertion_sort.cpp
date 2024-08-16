#include<bits/stdc++.h>

using namespace std;

void display(int *arr,int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertSort(int *arr,int n){
    int k,j;
    for(int i = 1; i < n; i++){
        k = arr[i];
        j = i-1;
        while(j>=0 && k<arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}

int main(){
    int arr[6] = {3,5,1,6,2,4};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting" << endl;
    display(arr,size);

    cout << "Displaying array after insertion sort" << endl;
    insertSort(arr,size);
    display(arr,size);
    return 0;
}