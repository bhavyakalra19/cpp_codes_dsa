#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
    string fullname;
    cout << "Enter your full name:" << endl;
    //Don't ever use cin for strings
    getline(cin,fullname);
    cout << "your full name is " << fullname << endl;
    return 0;
}