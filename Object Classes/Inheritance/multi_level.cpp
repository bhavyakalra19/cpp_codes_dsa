#include<bits/stdc++.h>

using namespace std;

class animal{
    public:
    string name;
    
    animal(){
        cout << "Enter animal name: " << endl;
        getline(cin,name);
    }

    void sleep(){
        cout << name << " is sleeping" << endl;
    }
};

class dog: public animal{
    public:
    void eat(){
        cout << name << " is eating" << endl;
    }
};

class puppy: public dog{
    public:
    void play(){
        cout << name << " is playing" << endl;
    }
};

int main(){
    puppy p;
    p.sleep();
    p.eat();
    p.play();
    return 0;
}