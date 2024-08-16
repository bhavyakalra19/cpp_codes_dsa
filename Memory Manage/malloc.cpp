#include<bits/stdc++.h>

using namespace std;

void fun_one(){
    int len = 5;
    int *ptr = (int*)(malloc(sizeof(int)*len));
    
    for(int i=0; i<len; i++){
        cout << "Enter Variable number: " << i << endl;
        cin >> *(ptr + i);
    }
    cout << "Entered values are: " << endl;
    for(int i=0;i<len;i++){
        cout << *(ptr + i) << endl;
    }
    free(ptr);
    cout << "After Free entered values are: " << endl;
    for(int i=0;i<len;i++){
        cout << *(ptr + i) << endl;
    }
}

int main(){
    void (* func)();
    func = fun_one;
    func();
    return 0;
}