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
        int digit = n % 10; // finding last digit

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10; // number divide by ten
        i++;
    }

    cout << "Binary to decimal of " << original << " is: " << ans << endl;

    return 0;
}