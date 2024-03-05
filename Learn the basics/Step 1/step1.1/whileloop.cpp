#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    int rem;
    cin >> n;
    int evenTotal = 0;
    int oddTotal = 0;
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 == 0)
        {
            evenTotal = evenTotal + rem;
        }
        else
        {
            oddTotal = oddTotal + rem;
        }
        n = n / 10;
    }

    cout << evenTotal << " " << oddTotal;
}
