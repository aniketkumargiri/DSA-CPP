#include <bits/stdc++.h>
using namespace std;

bool IsPowerOfTwo(int n)
{
    int ans = 1;

    for (int i = 1; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }

        if (ans < INT_MAX)
        {
            int ans = ans * 2;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // bool ans = IsPowerOfTwo(n);
    // if (ans)
    // {
    //     cout << "Power of two" << endl;
    // }
    // else
    // {
    //     cout << "Not power of two" << endl;
    // }

    if (n == 0)
    {
        cout << "Not power of two\n";
        return 0;
    }

    if ((n & (n - 1)) == 0) // if zero? true : false
    {
        cout << "Power of two\n";
    }
    else
    {
        cout << "Not power of two\n";
    }

    return 0;
}