#include <bits/stdc++.h>
using namespace std;

void dummy(int &n)
{
    n++;
    cout << "Number n is: " << n << endl;
    n++;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    dummy(n);

    cout << "Number n is: " << n << endl;

    return 0;
}