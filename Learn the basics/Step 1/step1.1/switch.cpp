// In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.

// There are 2 choices in the menu:

// Choice 1 is to find the area of a circle having radius 'r'.

// Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.

// You are given the choice 'ch' and an array 'a'.

// If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[2];
    int ch;
    int area;

    cin >> a[0] >> a[1];
    cout << "enter your choice 1 or 2:" << endl;

    cin >> ch;
    switch (ch)
    {
    case 1:
        area = M_PI * a[0] * a[0];
        cout << area;
    default:
        area = a[0] * a[1];
        cout << area;
    }
}
