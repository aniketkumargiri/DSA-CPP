#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 2; i <= n; i++)
    {
        int next = a + b;
        cout << next << " ";

        a = b;
        b = next;
    }

    return 0;
}