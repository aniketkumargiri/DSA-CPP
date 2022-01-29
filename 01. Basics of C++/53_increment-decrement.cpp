#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 2;
    int i = 7;

    cout << (++i) << endl;
    // 8
    cout << (i++) << endl;
    // 8, i = 9
    cout << (i--) << endl;
    // 9, i = 8
    cout << (--i) << endl;
    // 7, i = 7

    int sum2 = a + (i++);
    cout << "sum = " << sum2 << endl;

    int sum1 = a + (++i);
    cout << "sum = " << sum1 << endl;

    int diff1 = a + (i--);
    cout << "diff1 = " << diff1 << endl;

    int diff2 = a + (--i);
    cout << "diff2 = " << diff2 << endl;

    return 0;
}