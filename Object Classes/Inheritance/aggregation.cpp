#include<bits/stdc++.h>

using namespace std;

class address{
    public:
    string city;
    string state;
    string country;

    address(string a, string b, string c){
        this->city = a;
        this->state = b;
        this->country = c;
    }
};

class employee{
    public:
    int id;
    string name;
    address *a;
    employee(int x, string y, address *w){
        this->id = id;
        this->name = y;
        this->a = w;
    }

    void display(){
        cout << "Employee id: " << id << " name: " << name <<" address: " << a->city << a->state << a->country << endl;
    }
};

int main(){
    address a = address("kaithal","haryana","INDIA");
    employee e = employee(9,"Bhavya", &a);
    e.display();
    return 0;
}