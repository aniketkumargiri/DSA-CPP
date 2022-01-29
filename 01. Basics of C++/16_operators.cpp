#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int a = 2 / 5;
    // float a = 2.0 / 5;
    // double a = 2 / 5.0;
    // cout << a << "\n";

    int a = 2;
    int b = 3;

    bool first = (a == b);
    cout << first << endl;

    bool third = (a < b);
    cout << third << endl;

    bool second = (a > b);
    cout << second << endl;

    bool fourth = (a <= b);
    cout << fourth << endl;

    bool fifth = (a >= b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;

    cout << (!18) << endl;
    cout << (!0) << endl;

    return 0;
}