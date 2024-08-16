#include<bits/stdc++.h>

using namespace std;

void pop_function(string str1){

    str1.pop_back();
    cout << "Word after pop_back function: " << str1 << endl;
}

int main(){
    string word;
    cout << "enter a string:" << endl;
    cin >> word;
    pop_function(word);
    return 0;
}