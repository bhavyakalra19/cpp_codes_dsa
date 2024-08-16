#include<bits/stdc++.h>

using namespace std;

int main(){
    tuple<int,float,double> tp;
    tp = make_tuple(1,2,3);

    cout << "Printing tuple" << endl;
    int size = tuple_size<decltype(tp)>::value;
    cout << "The size of tuple: " << size << endl;
    
    cout << "Values of tuple tp are: " << get<0>(tp) << " " << get<1>(tp) << " " << get<2>(tp) << endl;
    return 0;
}