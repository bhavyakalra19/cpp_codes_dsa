#include<bits/stdc++.h>

using namespace std;

void input(int * a, int size){
    cout << "Enter " << size << " variables" << endl;
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
}

void output(int *a, int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    set<int> st;
    int *it;
    int n;
    cout << "Get allocato size" << endl;
    cin >> n;
    it = st.get_allocator().allocate(n);

    input(it,n);
    output(it,n);

    //Deallocating memory of allocated array
    st.get_allocator().deallocate(it,n);
    return 0;
}