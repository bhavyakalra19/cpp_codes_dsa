#include<bits/stdc++.h>

using namespace std;

class office{
    private:
    string name;
    void display_data(){
        cout << "Entered name is: " << name << endl;
    }
    public:
    void get_and_display(){
        cout << "Enter name" << endl;
        getline(cin,name);
        display_data();
    }
};

int main(){
    office ofc;
    ofc.get_and_display();
    return 0;
}