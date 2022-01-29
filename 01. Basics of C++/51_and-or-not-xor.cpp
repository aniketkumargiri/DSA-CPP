#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 4;
    int b = 6;

    int and_op = a & b;
    cout << "(a & b): " << and_op << endl;

    int or_op = a | b;
    cout << "(a | b): " << or_op << endl;

    int not_a = ~a;
    cout << "(~a): " << not_a << endl;

    int xor_op = a ^ b;
    cout << "(a ^ b): " << xor_op << endl;

    return 0;
}