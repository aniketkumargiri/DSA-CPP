#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 1;
    int b = a++; // b=1, a=2
    int c = ++a; // c=3, a=3
    cout << b << endl;
    cout << c << endl;

    return 0;
}