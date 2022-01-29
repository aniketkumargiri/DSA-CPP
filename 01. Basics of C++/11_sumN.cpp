#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;

    return 0;
}