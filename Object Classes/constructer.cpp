#include<bits/stdc++.h>

using namespace std;

class student{
    int roll_num;
    char name[20];
    int id;

    public:
        student(){
            cout << "Enter roll number" << endl;
            cin >> roll_num;
            cout << "Enter name" << endl;
            cin >> name;
            cout << "Enter id" << endl;
            cin >> id;
        }

        void display(){
            cout << name << " " << roll_num << " " << id << endl;
        }
};

class office{
    public:
        int emp_id;
        int emp_num;
        office(int id,int num){
            emp_id = id;
            emp_num = num;
        }

        void display(){
            cout << emp_id << " " << emp_num << endl;
        }
};

void func_one(){
    student s1;
    s1.display();
}

void func_two(){
    office ofc = office(1,902951500);
    ofc.display();
}

int main(){
    // func_one();
    func_two();
    return 0;
}