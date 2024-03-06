#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int n = 5;
    cout << "Enter 5 elements for array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is unsorted" << endl;
    }

    return 0;
}