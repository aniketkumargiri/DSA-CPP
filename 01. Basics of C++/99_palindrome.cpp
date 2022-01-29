#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp = n;
    int store = 0;
    int sum = 0;

    while (temp)
    {
        int rem = temp % 10;

        store = rem + (store * 10);
        sum = sum + rem;

        temp /= 10;
    }

    cout << "Sum of digits is: " << sum << endl;

    if (n == store)
    {
        cout << "Number is palindrome\n";
    }
    else
    {
        cout << "Number is not palindrome\n";
    }

    return 0;
}