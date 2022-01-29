#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;

    // edge case
    if (n == 0)
    {
        ans = 1;
        cout << "Complement of base 10 intger " << n << " is: " << ans << endl;
        return 0;
    }

    int original = n;
    int mask = 0;

    while (n)
    {
        mask = (mask << 1) | 1;
        n = n >> 1; // binary number divided by 2
    }

    ans = ((~original) & mask);
    cout << "Complement of base 10 intger " << original << " is: " << ans << endl;

    return 0;
}