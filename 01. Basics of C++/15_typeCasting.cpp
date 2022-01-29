#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 'a';
    cout << a << endl;
    cout << sizeof(a) << endl;

    char ch = 98;
    cout << ch << endl;
    cout << sizeof(char) << endl;

    char c = 123456; // warning: overflow in conversion from 'int' to 'char' changes value from '123456' to '@ -> 64'
    cout << c << endl;

    unsigned int n = -112; // compiler treats this as positive
    cout << n << endl;

    return 0;
}