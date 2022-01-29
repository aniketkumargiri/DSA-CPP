#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";

        if (i & 1)
        {
            continue;
        }
        i++;
    }

    return 0;
}