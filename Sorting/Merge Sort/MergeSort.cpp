#include<bits/stdc++.h>

using namespace std;

void display(int *arr,int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int left,int mid,int right){
    int *temp = new int[right-left+1];
    int i = left;
    int j = mid+1;
    int k = 0;
    while(i <= mid && j<=right){
        if(arr[i]< arr[j]){
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
    while(j <= right){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int r = 0; r<k; r++){
        arr[left+r] = temp[r];
    }
    delete[] temp;
}

void mergeSort(int arr[], int left, int right){
    if(left>=right){
        return;
    }
    int mid = (left + right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}


int main(){
    int arr[6] = {3,2,4,6,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Displaying array before merge sort" << endl;
    display(arr,size);
    mergeSort(arr,0,size-1);
    display(arr,size);
    return 0;
}