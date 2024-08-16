#include<bits/stdc++.h>

using namespace std;

int* int_arr_return_pass(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] += 1;
    }
    return arr;
}

string* str_arr_return_pass(string *str, int size){
    for(int i = 0; i < size; i++){
        str[i] = str[i] + 'c';
    }
    return str;
}

void int_arr(){
    int arr[4] = {1,2,3,4};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int *ptr_arr;
    ptr_arr = int_arr_return_pass(arr, size_arr);
    for(int i = 0; i < 4; i++){
        cout << ptr_arr[i] << endl;
    }
}

void str_arr(){
    string str[4] = {"cars", "bikes", "buses", "ships"};
    int arr_size = sizeof(str)/sizeof(str[0]);
    string *str_ptr;
    str_ptr = str_arr_return_pass(str, arr_size);
    for(int i = 0; i < arr_size; i++){
        cout << str_ptr[i] << endl;
    }
}

int main(){
    // int_arr();
    str_arr();
    return 0;
}
