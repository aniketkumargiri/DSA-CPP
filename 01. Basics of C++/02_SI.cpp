#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, r, t;
    cin >> p >> r >> t;
    int si = (p * r * t) / 100; // simple interest
    cout << si << endl;

    return 0;
}