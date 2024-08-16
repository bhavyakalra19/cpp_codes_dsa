#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sorting(int *arr, int size){
    bool swaping = false;

    for(int i = 0;i<size;i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaping = true;
            }

            if(swaping == false){
                break;
            }
        }
    }
}

int main(){
    int arr[6] = {3,2,5,6,1,4};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting" << endl;
    display(arr,size);
    bubble_sorting(arr,size);
    cout << "Array after sorting" << endl;
    display(arr,size);
    return 0; 
}