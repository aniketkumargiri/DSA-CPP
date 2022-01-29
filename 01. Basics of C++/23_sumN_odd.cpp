#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // sum of odd numbers till n
    int sumOdd = 0;
    int j = 1;
    while (j <= n)
    {
        sumOdd += j;
        j = j + 2;
    }
    cout << "Sum of odd numbers till n " << sumOdd << endl;

    return 0;
}