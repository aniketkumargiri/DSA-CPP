#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount; // 1388

    int r_500, r_200, r_100, r_50, r_20, r_10, r_5, r_2, r_1;

    r_500 = amount / 500;
    amount = amount % 500;

    r_200 = amount / 200;
    amount = amount % 200;

    r_100 = amount / 100;
    amount = amount % 100;

    r_50 = amount / 50;
    amount = amount % 50;

    r_20 = amount / 20;
    amount = amount % 20;

    r_10 = amount / 10;
    amount = amount % 10;

    r_5 = amount / 5;
    amount = amount % 5;

    r_2 = amount / 2;
    amount = amount % 2;

    r_1 = amount;

    cout << "Number of notes of 500 is: " << r_500 << ", r_200 is: " << r_200 << ", r_100 is: " << r_100 << ", r_50 is: " << r_50 << ", 20 is: " << r_20 << ", 10 is: " << r_10 << ", r_5 is: " << r_5 << ", r_1 is: " << r_1 << endl;

    return 0;
}
