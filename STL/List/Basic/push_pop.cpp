#include<bits/stdc++.h>

using namespace std;

class office{
    list<int> l1{4,5,6,7,8,9};

    public:
        void function_pop(){
            l1.pop_back();
        }
        
        void display(){
            cout << "printing list using display() fucntion" << endl;
            for(auto i : l1){
                cout << i << endl;
            }
        }
        
        list<int> function_push(int num){
            l1.push_back(num);
            return l1;
        } 
        
};

class office_front{
    list<int> l1{4,5,6,7,8,9};

    public:
        void function_pop(){
            l1.pop_front();
        }
        
        void display(){
            cout << "printing list using display() fucntion" << endl;
            for(auto i : l1){
                cout << i << endl;
            }
        }
        
        list<int> function_push(int num){
            l1.push_front(num);
            return l1;
        } 
        
};

void function_back(){
    office ofc;
    list<int> l1;
    ofc.display();
    ofc.function_pop();
    ofc.display();
    l1 = ofc.function_push(10);
    cout << "printing returned list" << endl;
    for(auto i : l1){
        cout << i << endl;
    }
}

void function_front(){
    office_front ofc;
    list<int> l1;
    ofc.display();
    ofc.function_pop();
    ofc.display();
    l1 = ofc.function_push(10);
    cout << "printing returned list" << endl;
    for(auto i : l1){
        cout << i << endl;
    }
}

int main(){
    // function_back();
    function_front();
    return 0;
}