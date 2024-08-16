#include<bits/stdc++.h>

using namespace std;

class office{
    private:
    int num;
    // set variable or any other data type as private so thst others can't breach the data use get and set method to use the function.

    public:
    void setSalary(int sal){
        num = sal;
    }

    int getSalary(){
        return num;
    }
};

int main(){
    office ofc;
    ofc.setSalary(50000);
    cout << "The salary is: " << ofc.getSalary() << endl;
}