#include<bits/stdc++.h>

using namespace std;

class office{
    public:
    virtual void display(){
        cout << "black" << endl;
    }
};

class employee: public office{
    public:
    void display(){
        cout << "grey" << endl;
    }
};

int main(){
    office *ofc;
    employee emp;
    ofc = &emp;
    ofc->display();
    ofc->office::display();
    return 0;
}

//A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.