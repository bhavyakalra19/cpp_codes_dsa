#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int quick(int *arr, int s, int l){
    int low = s-1;
    int pivot  = arr[l];
    for(int i = s; i<=l-1; i++){
        if(arr[i]<pivot){
            low++;
            swap(arr[low], arr[i]);
        }
    }
    swap(arr[low+1], arr[l]);
    return low+1;
}

void quickSort(int *arr,int start, int end){
    if(start<end){
        int pivot = quick(arr, start, end);
        quickSort(arr, start, pivot-1);
        quickSort(arr,pivot+1,end);
    }
}

int main(){
    int arr[6] = {3,4,1,2,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Displaying array before sorting" << endl;
    display(arr,size);
    cout << "Displaying array after sorting" << endl;
    quickSort(arr,0,size-1);
    display(arr,size);
    return 0;
}