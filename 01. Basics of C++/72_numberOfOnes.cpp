#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    while (n)
    {
        // checking last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    cout << "Number of 1 bits in given number is: " << count << endl;

    return 0;
}