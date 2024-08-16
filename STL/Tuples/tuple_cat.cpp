#include<bits/stdc++.h>

using namespace std;

int main(){
    tuple<int,float,double> tp1;
    tuple<string,char> tp2;
    tp1 = make_tuple(4,5,6);
    tp2 = make_tuple("Bhavya",'B');

    auto tp3 = tuple_cat(tp1,tp2);
    cout << "Values of tuple are: " << get<0>(tp3) << " " << get<1>(tp3) << " " << get<2>(tp3) << " " << get<3>(tp3) << " " << get<4>(tp3) << endl;
    return 0;
}