#include<bits/stdc++.h>

using namespace std;

class office{
    public:
    void display(){
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
    employee emp;
    emp.display();
    emp.office::display();
    return 0;
}