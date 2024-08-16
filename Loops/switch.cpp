#include<bits/stdc++.h>

using namespace std;

int main(){

    cout << "Enter number from numbers between 1 and 3" << endl;
    int num;
    cin >> num;
    switch(num){
        case 1:
            cout << "You have entered number 1" << endl;
            break;
        case 2:
            cout << "You have entered number 2" << endl;
            break;
        case 3:
            cout << "You have entered number 3" << endl;
            break;
        default:
            cout << "You have entered other number" << endl;
            break;
    }
    return 0;
}
