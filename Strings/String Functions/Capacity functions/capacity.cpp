#include<bits/stdc++.h>

using namespace std;

class string_get{
    private:
        string str;

    public:
        string_get(){
            cout << "Enter any string" << endl;
            getline(cin,str);
        }

        string get_value(){
            return str;
        }
};

void cap_func(string str){
    cout << "Length of current string is: " << str.size() << endl;
    cout << "Capacity of entered string is: " << str.capacity() << endl;
    str.resize(4);
    cout << "Shrinking capacity of string to its length size" << endl;
    str.shrink_to_fit();
    cout << "Resultant string capaxity is: " << str.capacity() << endl;
}

int main(){
    string_get str;
    cap_func(str.get_value());
    return 0;
}