#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int original = n;
    int ans = 0;

    while (n)
    {
        int digit = n % 10;

        // edge case
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 1LL * 10) + digit;

        n /= 10;
    }

    cout << "Reverse of " << original << " is: " << ans << endl;

    return 0;
}