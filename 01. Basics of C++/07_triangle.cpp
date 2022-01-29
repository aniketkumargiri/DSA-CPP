#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int s1 = a + b;
    int s2 = b + c;
    int s3 = a + c;

    if (s1 > 0 && s2 > 0 && s3 > 0)
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }

    return 0;
}