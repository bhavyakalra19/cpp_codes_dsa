#include<bits/stdc++.h>

using namespace std;

void func_one(){
    vector<int> v1;
    int n;
    cout << "Checking vector if it's empty before entering values" << endl;

    if(v1.empty() == true){
        cout << "Vector is empty" << endl;
    }else{
        cout << "Vector is not empty" << endl;
    }

    for(int i = 0; i < 5 ; i++){
        cout << "Enter value: " << i+1 << endl;
        cin >> n;
        v1.push_back(n);
    }

    cout << "Checking vector if it's empty After entering values" << endl;

    if(v1.empty() == true){
        cout << "Vector is empty" << endl;
    }else{
        cout << "Vector is not empty" << endl;
    }
}

int main(){
    func_one();
    return 0;
}