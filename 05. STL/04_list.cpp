#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }

    l.erase(l.begin());
    cout << "\nAfter Erase" << endl;

    for (int i : l)
    {
        cout << i << " ";
    }

    l.push_front(4);
    l.push_back(3);
    cout << "\nSize of list: " << l.size() << endl;

    list<int> n(l);
    cout << "Printing copied list: " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }

    // initialize whole list with a sigle value
    list<int> w(5, 100);

    cout << "\nPrinting w" << endl;
    for (int i : w)
    {
        cout << i << " ";
    }

    return 0;
}