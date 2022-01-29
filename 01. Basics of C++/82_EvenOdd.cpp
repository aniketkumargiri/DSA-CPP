#include <bits/stdc++.h>
using namespace std;

bool isEven(int n)
{
    // odd
    if (n & 1)
    {
        return false; // false -> 0
    }

    // even
    else
    {
        return true; // true -> 1
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is even\n";
    }
    else
    {
        cout << "Number is odd\n";
    }

    return 0;
}