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
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i = i - 1;
    }

    return 0;
}