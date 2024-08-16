#include<bits/stdc++.h>

using namespace std;

class animal{
    public:
    string name;
    
    void getName(){
        cout << "Enter name of animal" << endl;
        getline(cin,name);
    }
};

class dog: public animal{
    public:
    void skill(){
        cout << name << " is barking" << endl;
    }
};

int main(){
    dog d;
    d.getName();
    d.skill();
    return 0;
}