#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, string> m;

    m[1] = "aniket";
    m[12] = "kumar";
    m[3] = "giri";

    m.insert({5, "rishi"});

    cout << "Before erasing" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "\nFinding 13-> " << m.count(12) << endl;

    m.erase(12);
    cout << "After erasing" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}