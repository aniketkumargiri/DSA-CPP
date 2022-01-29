#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 8;

    int leftshift = a << 3; // multiply by 2 three times
    cout << "Left shift: " << leftshift << endl;

    int rightshift = a >> 2; // divide by 2 two times
    cout << "Right shift: " << rightshift << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    return 0;
}