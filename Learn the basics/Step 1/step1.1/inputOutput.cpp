#include <iostream>
using namespace std;

int main()
{
    // Write your code here

    char value;
    cin >> value;
    if (value >= 65 && value <= 90)
    {
        cout << 1;
    }
    else if (value >= 97 && value <= 122)
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
}
