#include <bits/stdc++.h>
using namespace std;

// function signature
void printCounting(int n)
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // function call
    printCounting(n);

    return 0;
}