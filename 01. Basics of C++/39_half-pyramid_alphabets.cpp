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
    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j = j + 1;
        }
        ch++;
        cout << endl;
        i = i + 1;
    }

    return 0;
}