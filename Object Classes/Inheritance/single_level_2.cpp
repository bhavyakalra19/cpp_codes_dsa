#include<bits/stdc++.h>

using namespace std;

class office{
    public:
    int salary;

    office(){
        cout << "Enter office salary" << endl;
        cin >> salary;
    }

    int getSalary(){
        return salary;
    }
};

class employee: private office{
    public:
    void display(){
        int salary  = getSalary();
        cout << "The salary of employee is: " << salary << endl;
    }
};

int main(){
    employee emp1;
    emp1.display();
    return 0;
}