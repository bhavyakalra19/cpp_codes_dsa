#include<bits/stdc++.h>

using namespace std;

//str.push_back('char')
void push_backDemo(string str1, string str2)
{
    // Appends character by character str2
    // at the end of str1
    //str2[i] != '\0' -> this means when the last character is null
    str1.push_back(' ');
    for(int i = 0; str2[i] != '\0'; i++){
        str1.push_back(str2[i]);
    }
    cout << "The result is: " << str1 << endl;
}
         
// Driver code
int main()
{
    string str1("bhavya");
    string str2("kalra");

    // cout << str1.push_back(str2); this will show error as we can pass only character not the string

    cout << "Original String : " << str1 << endl;
    push_backDemo(str1, str2);
 
    return 0;
}