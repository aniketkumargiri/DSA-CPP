#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // sum of even numbers till n
    int sumEven = 0;
    int i = 0;
    while (i <= n)
    {
        sumEven += i;
        i = i + 2;
    }
    cout << "Sum of even numbers till n " << sumEven << endl;

    return 0;
}