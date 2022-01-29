#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int lcm(int a, int b)
{
    int maxi = maximum(a, b);

    while (true) // infinite loop until the lcm is found
    {
        if (maxi % a == 0 && maxi % b == 0)
        {
            return maxi;
            break;
        }
        else
        {
            ++maxi;
        }
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;

    return 0;
}