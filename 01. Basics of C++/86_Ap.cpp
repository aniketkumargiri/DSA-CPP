#include <bits/stdc++.h>
using namespace std;

int Nth_Term_AP(int n)
{
    int nth = (2 * n + 1);

    return nth;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << "Nth term of the AP is: " << Nth_Term_AP(n) << endl;

    return 0;
}