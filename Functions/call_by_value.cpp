#include<bits/stdc++.h>

using namespace std;

void function_one(int num){
    cout << num << endl;
}

int function_two(){
    return 0;
}

int function_three(int a, int b){
    return a + b;
}

int main(){
    again:
        cout << "You have entered other number. Please ";
    cout << "Enter number 1 or 2 or 3" << endl;
    int num;
    cin >> num;
    if(num == 1){
        cout << "Enter one number" << endl;
        int num1;
        cin >> num1;
        function_one(num1);
    }else if(num == 2){
        cout << function_two() << endl;
    }else if(num == 3){
        cout << "Enter two numbers for their sum" << endl;
        int num1, num2;
        cin >> num1 >> num2;
        cout << function_three(num1, num2) << endl;
    }else{
        goto again;
    }
    return 0;
}