#include<bits/stdc++.h>

using namespace std;

class office{
    public:
    int add(int a, int b, int c){
        return a + b +c;
    }

    int add(int a, int b){
        return a + b;
    }

    float add(float a, float b){
        return a + b;
    }
};

int main(){
    office ofc;
    float x  = 3.1;
    float y = 4.0;
    cout << ofc.add(1,2) << endl;
    cout << ofc.add(x,y) << endl;
    cout << ofc.add(1,2,3) << endl;
    return 0;
}