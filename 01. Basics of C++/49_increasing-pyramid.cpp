#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     for (int start = i - 1; start >= 1; start--)
    //     {
    //         cout << start << " ";
    //     }
    //     cout << endl;
    // }

    int i = 1;
    while (i <= n)
    {
        // printing the space
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }

        // printing the 1st triangle
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j = j + 1;
        }

        // printing the 2nd triangle
        int start = i - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}