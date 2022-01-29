#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nElement at 2nd index-> " << a.at(2) << endl;

    cout << "Empty or not-> " << a.empty() << endl;

    cout << "First Element-> " << a.front() << endl;
    cout << "Last Element-> " << a.back() << endl;

    return 0;
}