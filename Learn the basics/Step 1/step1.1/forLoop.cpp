#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int size;
    cin >> size;
    int f[size + 2];
    f[0] = 1;
    f[1] = 1;
    for (int i = 0; i <= size; i++)
    {
        f[i + 2] = f[i] + f[i + 1];
    }
    cout << f[size - 1];
}