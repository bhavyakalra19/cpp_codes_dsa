#include<bits/stdc++.h>

using namespace std;

class num1{
    public:
    int n;
    void get_num(){
        cout << "Enter number one" << endl;
        cin >> n;
    }

    int display(int a, int b, int c){
        return a*b*c;
    }
};

class num2: public num1{
    public:
    int n;
    void get_num(){
        cout << "Enter number two" << endl;
        cin >> n;
    }
};

class num3{
    public:
    int n;
    void get_num(){
        cout << "Enter number three" << endl;
        cin >> n;
    }
};


class multiplication: public num2, public num3{
    public:
    void multi(){
        num1::get_num();
        num2::get_num();
        num3::get_num();
        cout << "Multiplication of numbers is: " << display(num1::n,num2::n,num3::n) << endl;
    }
};

int main(){
    multiplication ml;
    ml.multi();
    return 0;
}