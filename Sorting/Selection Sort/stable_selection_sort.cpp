#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void stable_bubble_sort(int *arr, int size){
    int min;
    for(int i = 0; i < size; i++){
        min = i;
        for(int j = i + 1; j < size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }

        if(min!=i){
            int key = arr[min];
            for(int k = min; k > i; k--){
                arr[k]=arr[k-1];
            }
            arr[i]= key;
        }
    }
}

int main(){
    int arr[6] = {4,3,1,5,2,6};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sort" << endl;
    display(arr,size);
    stable_bubble_sort(arr,size);
    display(arr,size);
    return 0;
}