#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr,int begin, int mid, int end){
    int temp[end-begin+1];
    int i = begin; 
    int j = mid+1; 
    int k = 0;

    while(i <= mid && j <= end){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
        }else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j<=end){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int a = 0; a < k; a++){
        arr[begin + a] = temp[a];
    }
}

void mergeSort(int *arr, int begin, int end){
    if(begin>=end){
        return;
    }
    int mid = (begin + end)/2;
    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);
}

int main(){
    int arr[6] = {3,4,1,6,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Displaying array before sorting" << endl;
    display(arr,size);

    cout << "Sorting array" << endl;
    mergeSort(arr,0,size-1);

    cout << "Displaying array after merging" << endl;
    display(arr,size);
    return 0;
}