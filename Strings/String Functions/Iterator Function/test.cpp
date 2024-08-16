#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path){
        stack<char> st;
        string str = "";
        for(int i=0; i<path.length(); i++){
            if(path[i] == '.'){
                if(path[i-1]==path[i] && ((i!=path.length()-1 && path[i+1] == '/') || i==path.length()-1)){
                    if(st.size ()> 2 && path[i-2]==path[i]){
                        st.push(path[i]);
                        continue;
                    }
                    st.pop();
                    st.pop();
                    if(!st.empty()){
                        while(st.top()!='/'){
                            st.pop();
                        }
                    }else{
                        st.push('/');
                    }
                }else if(path[i-1] == '/' && ((i!=path.length()-1 && path[i+1] == '/') || i==path.length()-1)){
                    continue;
                }else{
                    st.push(path[i]);
                }
            }
            else{
                if(path[i]=='_'){
                    continue;
                }

                if(path[i] == '/' ){
                    if(!st.empty()){
                        if(st.top() != '/'){
                            st.push(path[i]);
                        }
                    }else{
                        st.push('/');
                    }
                }else{
                    st.push(path[i]);
                }
            }
        }
        if(!st.empty() && st.size() != 1 && st.top()=='/'){
            st.pop();
        }
        while(!st.empty()){
            str = st.top() + str;
            st.pop();
        }
        cout << str << endl;
        return str;
    }
};


int main(){
    string str = "/..h";
    Solution st;
    str = st.simplifyPath(str);
    return 0;
}