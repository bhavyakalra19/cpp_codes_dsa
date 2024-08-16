#include<bits/stdc++.h>

using namespace std;

struct office{
    int id;
};

struct employee{
    office ofc;
};

int main(){
    employee emp;
    int& b = emp.ofc.id;
    b = 10;
    cout << emp.ofc.id << endl;
}