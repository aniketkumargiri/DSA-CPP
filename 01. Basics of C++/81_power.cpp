#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a; // a to the power b
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << a << " to the power " << b << " is: " << ans << endl;

    return 0;
}