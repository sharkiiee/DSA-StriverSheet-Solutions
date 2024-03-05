#include <bits/stdc++.h>
using namespace std;

string compareIfElse(int a, int b)
{
    // Write your code here

    if (a < b)
    {
        return "smaller";
    }
    else if (a > b)
    {
        return "greater";
    }
    else
    {
        return "equal";
    }
}

int main()
{
    int a, b;
    string result;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    result = compareIfElse(a, b);
    cout << result;
}