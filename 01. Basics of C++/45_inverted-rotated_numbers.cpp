#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (n - i + 1) << " ";
    //     }
    //     cout << endl;
    // }

    int i = 1;
    while (i <= n)
    {
        // printing the space
        int space = i - 1;
        while (space)
        {
            cout << "  ";
            space--;
        }

        // printing the stars
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}