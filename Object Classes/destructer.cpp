#include<bits/stdc++.h>

using namespace std;

class office{
    public:
    office(){
        cout << "constructor invoked" << endl;
    }

    ~office(){
        cout << "Destructor invoked" << endl;
    }
};

int main(){
    office ofc;
    return 0;
}