#include <bits/stdc++.h>
using namespace std;

int setBits(int n)
{
    int ct = 0;
    while (n)
    {
        if (n & 1)
        {
            ct++;
        }
        n = n >> 1;
    }

    return ct;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << "Number of set bits in " << a << " and " << b << " is: " << setBits(a) << ", " << setBits(b) << endl;

    return 0;
}