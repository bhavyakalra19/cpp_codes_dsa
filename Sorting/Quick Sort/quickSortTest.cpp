#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << "";
    }
    cout << endl;
}

void merge(int *arr, int l, int mid, int h){
    int i = l;
    int j = h-mid+1;
    int *temp = new int[h-l+1];
    int k = 0;

    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
        }else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=h){
        temp[k] = arr[j];
        i++;
        k++;
    }
}

void mergeSort(int *arr, int low, int high){
    if(low>high){
        return;
    }   
        
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);    
}

int main(){
    int arr[6] = {3,4,1,5,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Displaying array before merge sort" << endl;
    display(arr,size);
    mergeSort(arr,0,size-1);
    cout << "Displaying array after merge sort" << endl;
    display(arr,size);
    return 0;
}