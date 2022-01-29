#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    int product = 1;

    while (n)
    {
        int rem = n % 10;
        n = n / 10;

        sum = sum + rem;
        product = product * rem;
    }

    cout << "Diffrence of Sum and Product is: " << abs(product - sum) << endl;

    return 0;
}