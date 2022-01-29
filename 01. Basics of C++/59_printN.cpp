#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Prinitng count from 1 to n\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " ";
    // }

    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << " ";
        }
        else
        {
            break;
        }
        i++;
    }

    return 0;
}