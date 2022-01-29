#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // 3 digit armstrong: 100 to 999 -> 153, 370, 371, 407

    int temp = n;
    int arm = 0;

    while (temp)
    {
        int rem = temp % 10;

        arm = arm + pow(rem, 3);

        temp /= 10;
    }

    if (arm == n)
    {
        cout << "Armstrong\n";
    }
    else
    {
        cout << "Not armstrong\n";
    }

    return 0;
}