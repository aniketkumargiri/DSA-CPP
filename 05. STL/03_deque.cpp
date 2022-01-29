#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "Empty or not-> " << d.empty() << endl;

    cout << "Element at first index-> " << d.at(1) << endl;

    cout << "First Element-> " << d.front() << endl;
    cout << "Last Element-> " << d.back() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();

    for (int i : d)
    {
        cout << i << " ";
    }

    d.push_front(3);
    d.push_back(4);

    cout << "\nBefore Erase-> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase-> " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}