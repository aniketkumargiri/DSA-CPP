#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 3;
    cout << a << endl;

    if (true)
    {
        int b = 5;
        cout << b << endl;
    }

    int b = 1;
    cout << b << endl;

    // int b = 7;
    b = 7;
    cout << b << endl;

    int i = 8;
    for (int i = 0; i < 8; i++) // local scope
    {
        cout << "HI ";
    }

    if (1)
    {
        cout << endl << b << " ";
        int b = 10;
        cout << b << " ";
        if (1)
        {
            cout << b << " ";
            int b = 20;
            cout << b << " ";
            if (1)
            {
                cout << b << " ";
                int b = 30;
                cout << b << " ";
            }
        }
    }

    return 0;
}