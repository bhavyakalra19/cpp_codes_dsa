#include<bits/stdc++.h>

using namespace std;

//Nested do-while loop
void nested_do_while(int num1, int num2){
    int i = 1;
    do {
        int j = 1;
        do {
            cout << i << " " << j << endl;
            j++;
        }while(j <= num2);
        i++;
    }while(i <= num1);
}

//do-while loop
void do_while(int num1){
    int i = 1;
    do{
        cout << i << endl;
        i++;
    }while(i <= num1);
}

void enter_num(){
    cout << "Enter number 1 or 2" << endl;
    int num;
    cin>> num;
    if(num == 1){
        cout << "Enter a number" << endl;
        int num1;
        cin >> num1;
        do_while(num1);
    }else if (num == 2){
        cout << "Enter two numbers" << endl;
        int num1, num2;
        cin >> num1 >> num2;
        nested_do_while(num1, num2);
    }else{
        cout << "You have entered other number. Please ";
        enter_num();
    }
}

int main(){
  enter_num();
  return 0;
}
