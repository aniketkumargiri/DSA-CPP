#include <bits/stdc++.h>
using namespace std;

int update(int a)
{
    a -= 5;

    return a;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 15;

    int updated = update(a);

    cout << a << endl;

    return 0;
}