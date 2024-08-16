#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st;
    int num;
    int n;
    //Pushing data in stack
    cout << "Push data in stack" << endl;
    cout << "Enter number of variables which is to be inserted in stack" << endl;
    cin >> num;
    for(int i = 0; i < num; i++){
        cout << "Enter variable number" << i + 1 << endl;
        cin >> n;
        st.push(n);// st.push() pushes element in stack on top
    }

    // Printing size of stack
    cout << "The size of stack is: " << st.size() << endl;

    cout << "Printing and removing top element using pop, top method and empty method" << endl;

    while(!st.empty()){ // st.empty() checks if stack is empty or not
        cout << st.top() << endl; // st.top() return s value of top element
        st.pop(); // st.pop() removes top element in stack
    }
    return 0;
}