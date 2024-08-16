#include<bits/stdc++.h>

using namespace std;  

class Account {  
   public:  
        int accno; //data member (also instance variable)      
        string name;   
        static int count;     
        Account(int accno, string name){    
            this->accno = accno;    
            this->name = name;    
            count++;  
        }    
        void display(){    
            cout << accno<< " " << name << endl;   
        }    
};  

int Account::count=10;  

int main(void) {  
    Account a1 =Account(201, "Sanjay");
    Account a2 = Account(202, "Nakul");   
    Account a3 = Account(203, "Ranjana");  
    a1.display();    
    a2.display();    
    a3.display();    
    cout << "Total Objects are: " << Account::count << endl;  
    return 0;  
}  