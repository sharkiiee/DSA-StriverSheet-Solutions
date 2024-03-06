
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5];
    int n = 5;

    cout << "Enter the 5 elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << largest;

    return 0;
}