#include<bits/stdc++.h>

using namespace std;

void if_break(){
    for(int i=0; i<=10; i++){
        if(i == 4){
            break;
        }
        cout << i << endl;
    }
}

void for_break(){
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            if(i == 1 && j == 1){
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}


int main(){
    //define position where it will come when goto work
    wrong_char:
        cout << "You have entered a wrong character. Please ";
    char c;
    cout << "Enter i/I for if loop and f/F for for loop" << endl;
    cin >> c;
    if(c == 'i' || c == 'I'){
        if_break();
    }else if(c == 'f' || c == 'F'){
        for_break();
    }else{
        //goto called
        goto wrong_char;
    }
    return 0;
}