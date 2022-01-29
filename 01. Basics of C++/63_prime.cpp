#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        // rem = 0, not a prime number
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == false)
    {
        cout << "Not a prime number\n";
    }
    else
    {
        cout << "Prime number\n";
    }

    return 0;
}