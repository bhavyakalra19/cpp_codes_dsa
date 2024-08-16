#include<bits/stdc++.h>

using namespace std;

void int_point_arr_pass(int *arr){// First way to get array in function 
    for(int i=0; i < 5; i++){
        cout << arr[i] << endl;
    }
    cout << "................" << endl;
    for(int i=0; i<5; i++){
        cout << *(arr + i) << endl;
    }
}

void int_arr_pass(int arr[]){// Second way to get array in function
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}

void str_pass(string str[]){// Second way to get array in function
    for(int i = 0; i < 4; i++){
        cout << str[i] << endl;
    }
}


void str_point_arr_pass(string *str){// First way to get array in function 
    for(int i=0; i < 4; i++){
        cout << str[i] << endl;
    }
    cout << "................" << endl;
    for(int i=0; i<4; i++){
        cout << *(str + i) << endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    string str[4] = {"cars", "bikes", "buses", "ships"};
    // str_pass(str);
    str_point_arr_pass(str);
    // int_point_arr_pass(arr);
    // int_arr_pass(arr);
    return 0;
}