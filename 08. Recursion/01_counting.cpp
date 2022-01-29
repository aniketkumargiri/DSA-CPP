#include <bits/stdc++.h>
using namespace std;

void countingDecending(int n)
{
    // Base Condition
    if (n <= 0)
    {
        return;
    }

    // Printing
    cout << n << " ";

    // Subproblem or recursive call
    countingDecending(n - 1);
}

void countingAscending(int n)
{
    // Base Condition
    if (n <= 0)
    {
        return;
    }

    // Subproblem or recursive call
    countingAscending(n - 1);

    // Printing
    cout << n << " ";
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Please enter the input" << endl;
    cin >> n;

    cout << "Counding in descending order..." << endl;
    countingDecending(n);

    cout << "\nCounding in ascending order..." << endl;
    countingAscending(n);

    return 0;
}