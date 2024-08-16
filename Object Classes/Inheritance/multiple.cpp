#include<bits/stdc++.h>

using namespace std;

class employee{
    public:
    int id;
    void insert_id(int num){
        id = num;
    }
};

class mentor{
    public:
    string name;
    void insert_name(string str){
        name = str;
    }
};

class office: public employee, public mentor{
    public:
    void display(){
        cout << "Employee id is: " << id << " and name is: " << name << endl;
    }
};

int main(){
    office ofc;
    ofc.insert_id(4);
    ofc.insert_name("bhavya");
    ofc.display();
    return 0;
}