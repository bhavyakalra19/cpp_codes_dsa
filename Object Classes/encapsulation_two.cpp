#include<bits/stdc++.h>

using namespace std;

class office{
    private:
    int id;
    string name;

    public:
    void set_data(){
        cout << "Enter id: " << endl;
        cin >> id;
        cout << "Enter name: " << endl;
        cin >> name;
    }

    void display(){
        cout << "employee id is " << id << " and employee name is " << name << endl;
    }
};

int main(){
    office ofc;
    ofc.set_data();
    ofc.display();
    return 0;
}