#include <bits/stdc++.h>
using namespace std;

int getFibonacci(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }

    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Please enter the input" << endl;
    cin >> n;

    cout << "value of fibonacci of " << n << " is " << getFibonacci(n) << endl;

    return 0;
}