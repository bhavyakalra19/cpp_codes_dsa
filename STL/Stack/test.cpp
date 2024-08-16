class Solution {
public:

    bool checkChar(char s1,char s2){
        if((s1 == '(' && s2 == ')') || (s1 == '{' && s2 == '}') || (s1 == '[' && s2 == ']')){
            return true;
        }
        return false;
    }

    bool isValid(string s) {
        if(s.length() % 2 != 0 || s.length() == 0){
            return false;
        }
        stack<char> st1;
        int i = 0;
        while(i!=s.length()){
            if(checkChar(s[i],s[i+1])){
                i = i + 2;
            }else{
                if(!st1.empty()){
                    if(checkChar(st1.top(),s[i])){
                        st1.pop();
                        i++;
                    }else{
                        st1.push(s[i]);
                        i++;
                    }
                }else{
                    st1.push(s[i]);
                    i++;
                }
            }
        }
        if(st1.empty()){
            return true;
        }
        return false;
    }
};