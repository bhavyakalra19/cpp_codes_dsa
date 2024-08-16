#include<bits/stdc++.h>
  
using namespace std;  

void void_pointer(){
  int a = 10;
  void *b;
  b = &a;
  cout << b << endl;
  // cout << *b << endl;
  //this will show error as we have assigned void pointer to a var not an complete object;
}

void int_void_pointer(){
  void *ptr; // void pointer declaration  
  int *ptr1; // integer pointer declaration  
  int data=10; // integer variable initialization  
  ptr=&data;  // storing the address of data variable in void pointer variable  
  ptr1=(int *)ptr; // assigning void pointer to integer pointer  
  cout << *ptr1 << endl; 
  // cout << *ptr << endl; This will show error as we have assign value to void pointer not the complete object
  cout << ptr1 << endl;

}

int main()  
{  
  void_pointer();
  // int_void_pointer();
  return 0;  
}  