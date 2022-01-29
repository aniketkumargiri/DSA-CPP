#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a;
    cin >> a;

    if (a >= 'a' && a <= 'z')
    {
        cout << "Lowercase\n";
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "Uppercase\n";
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "Numeric\n";
    }
    else
    {
        cout << "Special character\n";
    }
    
    return 0;
}