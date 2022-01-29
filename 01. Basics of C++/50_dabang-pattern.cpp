#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }

        int start = n - i;
        while (start)
        {
            cout << "* * ";
            start--;
        }

        int k = i;
        while (k >= 1)
        {
            cout << k << " ";
            k--;
        }

        cout << endl;
        i--;
    }

    return 0;
}