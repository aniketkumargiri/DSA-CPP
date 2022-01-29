#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int start = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << start++ << " ";
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

        // printing the stars
        int j = 1;
        while (j <= i)
        {
            cout << start++ << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}