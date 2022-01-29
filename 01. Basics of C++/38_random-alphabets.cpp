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
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + i - 1;
        int j = 1;
        while (j <= n)
        {
            cout << ch++ << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}