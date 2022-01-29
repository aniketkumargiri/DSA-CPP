#include <bits/stdc++.h>
using namespace std;

int getFactorial(int n)
{
    // Base Condition
    if (n <= 1)
    {
        return 1;
    }

    // subproblem or recursive call
    int subFactorial = getFactorial(n - 1);

    // final answer [ye bas 12 tyak k liye hi kaam karega]

    int answer = n * subFactorial;

    return answer;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Please enter the input" << endl;
    cin >> n;

    cout << "value of " << n << "! is " << getFactorial(n) << endl;

    return 0;
}