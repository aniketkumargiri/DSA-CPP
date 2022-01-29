#include <bits/stdc++.h>
using namespace std;

void printSpelling(int n, string str[])
{
    if (n == 0)
    {
        return;
    }

    printSpelling(n / 10, str);

    int number = n % 10;
    cout << str[number] << " ";

    // cout << str[n % 10] << " ";
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Please enter the input" << endl;
    cin >> n;

    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    printSpelling(n, str);

    return 0;
}