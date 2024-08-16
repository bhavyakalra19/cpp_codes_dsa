#include <bits/stdc++.h>

using namespace std;

class sets
{
public:
    void display(set<int> st)
    {
        for (auto i : st)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    set<int> st;
    sets sts;
    set<int>::iterator it;
    set<int>::iterator it2;
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    cout << "Printing set before removing data" << endl;
    sts.display(st);

    it = st.begin();
    advance(it, 4);

    st.erase(it);
    cout << "Printing set before removing 1 data" << endl;
    sts.display(st);

    advance(it,1);
    it2 = st.end();
    it = st.begin();
    advance(it,2);
    st.erase(it,it2);
    cout << "Printing set before removing data between two positions" << endl;
    sts.display(st);
    return 0;
}
