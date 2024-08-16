#include <bits/stdc++.h>

using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectSort(int *arr, int n)
{
    int min, store;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        if (min != i)
        {
            store = arr[min];
            for (int k = min; k > i; k--)
            {
                arr[k] = arr[k - 1];
            }
            arr[i] = store;
        }
    }

}

int main()
{
    int arr[5] = {3, 4, 2, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Displaying array before selection sort" << endl;
    display(arr, size);
    selectSort(arr, size);
    cout << "Displaying array after selection sort" << endl;
    display(arr, size);
    return 0;
}