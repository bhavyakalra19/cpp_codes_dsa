#include<bits/stdc++.h>

using namespace std;

void str_arr(){
    string str[4] = {"cars", "bikes", "buses", "ships"};
    for(int i = 0; i < 4; i++){
        cout << str[i] << endl;
    }
    cout << ".................." << endl;
    for(string s: str){
        cout << s << endl;
    }
}

void int_arr(){
    int arr[4] = {1,2,3,4};
    for(int i:arr){
        cout << i << endl;
    }
}

int main(){
    str_arr();
    // int_arr();
    return 0;
}