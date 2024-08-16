#include<bits/stdc++.h>

using namespace std;

struct rectangle{
    int width;
    int length;

    rectangle(){
        cout << "Enter width of rectangle" << endl;
        cin >> width;
        cout << "Enter length of rectangle" << endl;
        cin >> length;
    }

    int area(){
        return length * width;
    }
};

int main(){
    rectangle rc1;
    cout << "The area of rectangle is: " << rc1.area() << endl;
    return 0;
}