#include<bits/stdc++.h>

using namespace std;

void func_one(){
    int test[3][3];
    test[0][0] = 10;
    test[0][2] = 10;
    test[1][1] = 10;
    test[1][2] = 10;
    test[2][0] = 10;
    test[2][1] = 10;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
}

void func_two(){
    int test[3][3] = {
        {1,2,3},
        {2,1,3},
        {3,2,1},
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // func_one();
    func_two();
    return 0;
}