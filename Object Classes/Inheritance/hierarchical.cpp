#include<bits/stdc++.h>

using namespace std;

class shape{
    public:
    float a;
    float b;
    shape(){
        cout << "Enter two varibales" << endl;
        cin >> a >> b;
    }
};

class rectangle: public shape{
    public:
    rectangle(){
        cout << "In this we get area of Rectangle" << endl;
    }
    float area(){
        return a*b;
    }
    // ~rectangle(){
    //     cout << "This is area of Rectangle" << endl;
    // }
};

class triangle: public shape{
    public:
    triangle(){
        cout << "In this we get area of Triangle" << endl;
    }
    float area(){
        return (a*b)/2;
    }
    // ~triangle(){
    //     cout << "This is area of Triangle" << endl;
    // }
};

class cone: public shape{
    public:
    cone(){
        cout << "In this we get area of cone" << endl;
    }
    float area(){
        return (22 * a * a * b)/7;
    }
    // ~cone(){
    //     cout << "This is area of cone" << endl;
    // }
};

int main(){
    rectangle rc;
    cout << rc.area() << " is area of rectangle" << endl;
    triangle tr;
    cout << tr.area() << " is area of traingle" << endl;
    cone cn;
    cout << cn.area() << " is surface area of cone" << endl;
    return 0;
}
