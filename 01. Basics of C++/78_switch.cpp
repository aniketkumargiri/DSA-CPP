#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "First\n";
        break;

    case 2:
        cout << "Second\n";

        char ch;
        cin >> ch;
        switch (ch)
        {
        case '1':
            cout << "Character 1\n";
            break;
        default:
            cout << "Character default\n";
        }
        break;

    default:
        cout << "It is default case.\n";
    }

    return 0;
}