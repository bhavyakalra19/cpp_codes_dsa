#include<bits/stdc++.h>

using namespace std;

void swap_func(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

void select_sorting(int* arr, int size){
    int min_index;
    for(int i = 0; i < size; i++){
        min_index = i;
        for(int j=i+1; j<size;j++){
            if(arr[j] < arr[i]){
                min_index = j;
            }
        }

        if(min_index != i){
            swap_func(arr[i],arr[min_index]);
        }
    }
}

void display(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {3,2,5,6,1,4};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting" << endl;
    display(arr,size);
    select_sorting(arr,size);
    cout << "Array after sorting" << endl;
    display(arr,size);
    return 0; 
}