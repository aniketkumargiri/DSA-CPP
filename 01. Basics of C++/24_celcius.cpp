#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tempC;
    cin >> tempC;

    int tempF = (tempC * 9) / 5 + 32;
    cout << "Temperature in Farenheit is " << tempF << endl;

    return 0;
}