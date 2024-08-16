#include<bits/stdc++.h>

using namespace std;

void display(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    bool ans = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                ans = true;
            }
        }
        if(ans == false){
            break;
        }
    }
}

int main(){
    int arr[5] = {3,2,4,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Displaying array before bubble sort" << endl;
    display(arr,size);

    cout << "Displaying array after bubble sort" << endl;
    bubbleSort(arr,size);
    display(arr,size);
    return 0;
}