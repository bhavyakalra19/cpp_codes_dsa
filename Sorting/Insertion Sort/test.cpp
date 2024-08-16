#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int n){
    for(int i = 0; i < n; i ++){
        cout << arr[i]<< " ";
    }

    cout << endl;
}

int quickSortPivot(int *arr, int s, int e){
    int pivot = arr[e];
    int m = s-1;
    for(int i = s; i < e; i++){
        if(arr[i]<pivot){
            m++;
            swap(arr[m],arr[i]);
        }
    }
    swap(arr[m+1],arr[e]);
    return m+1;
}

void quickSort(int *arr, int start, int end){
    if(start<end){
        int pivot = quickSortPivot(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}

int main(){
    int arr[6] = {3,4,1,2,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Displaying array before sorting" << endl;
    display(arr,size);
    quickSort(arr, 0, size-1);
    cout << "Displaying array after sorting" << endl;
    display(arr,size);
    return 0;
}