#include <bits/stdc++.h>
using namespace std;

int update(int a)
{
    int ans = a * a;

    return ans;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 14;

    a = update(a);

    cout << a << endl;

    return 0;
}