#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int a = 0; // fibonacci index 1
    int b = 1; // fibonacci index 2
    int temp;
    
    for (int i = 3; i <= n; i++) // fibonacci indexing starts from 1, not 0
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return temp;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << n << "th fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}