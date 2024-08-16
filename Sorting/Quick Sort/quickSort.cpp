#include<bits/stdc++.h>

using namespace std;

void display(int *arr,int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;                       
}

int pivotElement(int *arr,int low,int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j = low; j <= high - 1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}


void quickSort(int *arr, int low, int high){
    if(low<high){
        int p1 = pivotElement(arr,low,high);
        quickSort(arr,low,p1-1);
        quickSort(arr,p1+1,high);
    }
}

int main(){
    int arr[6] = {3,2,1,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Displaying array data before quick sort" << endl;
    display(arr, size);
    quickSort(arr,0,size-1);
    cout << "Displaying array data after quick sort" << endl;
    display(arr,size);
    return 0;
}                   