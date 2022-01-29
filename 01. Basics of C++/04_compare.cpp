#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    // cout << "value of a and b is " << a << " and " << b << endl;

    if (a > b) // is a>b
    {
        cout << "A is greater" << endl;
    }
    else
    {
        cout << "B is greater" << endl;
    }

    return 0;
}