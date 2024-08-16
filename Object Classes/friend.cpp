#include<bits/stdc++.h>

using namespace std;
class employee;
class office{
    public:
    int num1;
    void set_data(int a){
        this->num1 = a;
    }
    friend void display(office,employee);
};

class employee{
    public:
    int num2;
    void set_data(int a){
        this->num2 = a;
    }
    friend void display(office,employee);
};

void display(office ofc, employee emp){
    if(ofc.num1 >= emp.num2){
        cout << ofc.num1 << endl;
    }else{
        cout << emp.num2 << endl;
    }
}

int main(){
    office a;
    employee e;
    a.set_data(5);
    e.set_data(6);
    display(a,e);
    return 0;
}

//If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.