#include<bits/stdc++.h>

using namespace std;

void for_loop_two(int num1 = 5, int num2 = 6){
    for(int i = 0; i <= num1; i++){
        for (int j = 0; j <= num2; j++){
            cout << i << " " << j << endl;
        }
    }
}

void for_loop_one(int num1 = 4){
    for(int i = 0; i <= num1; i++){
        cout << i << endl;
        // Time complexity: O(1)
        // Space complexity: O(1)
    }
}

int main(){
    
    //A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. 
    //The loop enables us to perform n number of steps together in one line. 

    int test;
    cout << "enter num 1 or 2" << endl;
    cin >> test;

    if(test == 1){
        for_loop_one();
    }else if(test == 2){
        for_loop_two();
    }else{
        cout << "you have entered other number" << endl;
    }
    return 0;
}
