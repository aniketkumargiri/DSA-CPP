#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);

    int denominator = factorial(r) * factorial(n - r);

    return numerator / denominator;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n >> r;

    cout << "Combination is: " << nCr(n, r) << endl;

    return 0;
}