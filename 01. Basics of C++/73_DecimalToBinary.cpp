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
    int i = 0;

    while (n)
    {
        int bit = n & 1; // binary number bit

        ans = ans + (bit * pow(10, i)); // same order as bit comes

        n = n >> 1; // binary number divided by 2
        i++;
    }

    cout << "Decimal to binary of " << original << " is: " << ans << endl;

    return 0;
}