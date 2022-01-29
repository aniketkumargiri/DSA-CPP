#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(7);

    sort(v.begin(), v.end()); // intro sort-> insertion, quick, heap sort
    cout << "After sorting:" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower bound-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound-> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotation:" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    int a = 2;
    int b = 5;
    cout << a << " " << b << endl;

    cout << "max-> " << max(a, b) << endl;
    cout << "min-> " << min(a, b) << endl;

    swap(a, b);
    cout << a << " " << b << endl;

    string str = "abcde";
    cout << "string is: " << str << endl;

    reverse(str.begin(), str.end());
    cout << "reversed string is: " << str << endl;

    return 0;
}