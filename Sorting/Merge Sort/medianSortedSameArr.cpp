
#include<bits/stdc++.h>

using namespace std;

float median(int* arr1, int* arr2, int n){
    int m1 = -1;
    int m2 = -1;
    int j = 0;
    int k = 0;

    for(int i = 0; i <= n; i++){

        if(k == n){
            m1 = m2;
            m2 = arr1[0];
            break;
        }
        if(j == n){
            m1 = m2;
            m2 = arr2[0];
            break;
        }

        if(arr1[j] <= arr2[k]){
            m1 = m2;
            m2 = arr1[j];
            j++;
        }else{
            m1 = m2;
            m2 = arr2[k];
            k++;
        }
        cout << m1 << endl;
        cout << m2 << endl;
    }
    return((1.0*(m1+m2))/2);
}

int main(){
    int arr1[4] = {3,4,5,6};
    int arr2[4] = {1,2,7,8};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    float a;
    a = median(arr1,arr2,size);
    cout << "Median is: " << a << endl;
    return 0;
}