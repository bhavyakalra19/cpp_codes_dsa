#include<bits/stdc++.h>

using namespace std;

class employee{
    public:
    void get(){
        cout << "employee" << endl;
    }
};

class mentor{
    public:
    void get(){
        cout << "mentor" << endl;
    }
};

class office: public employee, public mentor{
    public:
    void display(){
        employee::get();
        mentor::get();
    }
};

int main(){
    office ofc;
    ofc.employee::get();
    ofc.mentor::get();
    ofc.display();
    return 0;
}