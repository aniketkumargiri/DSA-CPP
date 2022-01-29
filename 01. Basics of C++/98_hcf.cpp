#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int hcf(int a, int b)
{
    int maxi = maximum(a, b);

    int gcd;

    for (int i = 1; i <= maxi; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << "HCF of " << a << " and " << b << " is: " << hcf(a, b) << endl;

    return 0;
}