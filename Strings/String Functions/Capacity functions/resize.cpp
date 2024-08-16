#include<bits/stdc++.h>

using namespace std;

class resize_class{
    private:
        string name;
        string x;

    public:
        void get_name(){
            cout << "Enter you name" << endl;
            getline(cin,name);
        }

        string resize_fun(int a){
            name.resize(a);
            return name;
        }

        string fill_resize(int a){
            name.resize(a,'$');
            return name;
        }
};

int main(){
    resize_class rc;
    rc.get_name();
    cout << rc.resize_fun(4) << endl;//it will change the string 
    cout << rc.fill_resize(20) << endl;// then this will perform action on changed string
    return 0;
}