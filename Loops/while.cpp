#include<bits/stdc++.h>

using namespace std;

void while_loop_two(int num1 = 2, int num2 = 3){
    int i = 1;
    while(i <= num1){
        //define var just above while loop
        int j = 1;
        while(j <= num2){
            cout << i << " " << j << endl;
            j++;
        }
        i++;
    }
}

void while_loop_one(int num1 = 4){
    int i = 0;
    while(i <= num1){
        cout << i << endl;
        i++;
    }
}

int main(){
    
    //A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. 
    //The loop enables us to perform n number of steps together in one line. 

    int test;
    cout << "enter num 1 or 2" << endl;
    cin >> test;

    if(test == 1){
        while_loop_one();
    }else if(test == 2){
        while_loop_two();
    }else{
        cout << "you have entered other number" << endl;
    }
    return 0;
}
