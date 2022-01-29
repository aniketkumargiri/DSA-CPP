#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the value of n " << endl;
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Number is Positive\n");
    }
    else if (n < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is Zero\n");
    }

    return 0;
}