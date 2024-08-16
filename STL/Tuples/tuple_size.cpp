#include<bits/stdc++.h>

using namespace std;

int main(){
    tuple<int,int,int> tp;
    tp = make_tuple(4,5,6);
    cout << "The size of tuple tp: " << tuple_size<decltype(tp)>::value << endl;
    return 0;
}