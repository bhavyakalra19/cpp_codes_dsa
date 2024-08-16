#include<bits/stdc++.h>

using namespace std;

void if_continue(){
    for(int i=0; i<=10; i++){
        if(i == 4){
            continue;
        }
        cout << i << endl;
    }
}

void for_continue(){
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            if(i == 1 && j == 1){
                continue;
            }
            cout << i << " " << j << endl;
        }
    }
}

void enter_char(){
    char c;
    cout << "Enter i/I for if loop and f/F for for loop" << endl;
    cin >> c;
    if(c == 'i' || c == 'I'){
        if_continue();
    }else if(c == 'f' || c == 'F'){
        for_continue();
    }else{
        cout << "You have entered a wrong character. Please " << endl;
        enter_char();
    }
}

int main(){
  enter_char();
  return 0;
}