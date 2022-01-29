#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int i = 2;
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         break;
    //     }
    // }

    // if (n == i)
    // {
    //     cout << "Prime" << endl;
    // }
    // else
    // {
    //     cout << "Non-prime" << endl;
    // }

    bool flag = true;
    while (i < n)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
        i++;
    }
    if (flag == true)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Non-prime" << endl;
    }

    return 0;
}