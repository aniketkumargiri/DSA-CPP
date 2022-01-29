#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 1;
    int b = 2;

    if (--a > 0 || b++ > 2)
    {
        cout << "Stage1 - Inside if ";
    }
    else
    {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;

    return 0;
}