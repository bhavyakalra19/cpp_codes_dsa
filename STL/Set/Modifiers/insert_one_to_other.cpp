#include <bits/stdc++.h>

using namespace std;

void display(set<int> st)
{
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    set<int> st1;
    set<int> st2;

    st1.insert(3);
    st1.insert(4);
    st1.insert(5);
    st1.insert(6);
    st1.insert(7);
    st1.insert(8);

    cout << "Printing set 1" << endl;
    display(st1);

    cout << "Copying data from st1 to st2" << endl;
    st2.insert(st1.find(4), st1.find(8)); // it will get elements from 4 and just one before 8
    display(st2);
    return 0;
}