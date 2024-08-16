#include<bits/stdc++.h>

using namespace std;

class student{
    public:
        int id;
        string name;

    void insert(int i, string str){
        id = i;
        name = str;
    }

    void display(){
        cout << id << " " << name << endl;
    }
};

class office{
    public:
        int return_value(int i, int j){
            return i + j;
        }

        void swap(int &num1, int &num2){
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        }
};

void func_one(){
    student s1;
    student s2;
    s1.insert(1,"bhavya");
    s2.insert(2,"kalra");
    s1.display();
    s2.display();
}

int func_two(int i, int j){
    office ofc1;
    return ofc1.return_value(i,j);
}

void func_three(){
    office ofc1;
    int a = 10;
    int b = 20;
    cout << a << " " << b << endl;
    ofc1.swap(a,b);
    cout << a << " " << b << endl;
}

int main(){
    // func_one();
    // cout << func_two(5,6) << endl;
    func_three();
    return 0;
}