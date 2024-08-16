#include<bits/stdc++.h>

using namespace std;

class employee{
    public:
    int number;
    string fullname;

    employee(int num, string name){
        this->number = num;
        this->fullname = name;
    }

    void display(){
        cout << "Your name and number are: " << fullname << " " << number << endl;
    }
};

int main(){
    employee emp = employee(18091999,"bhavya");
    emp.display();
    return 0;
}