#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;

    cout << "Element at 2nd index-> " << v.at(2) << endl;

    cout << "First Element-> " << v.front() << endl;
    cout << "Last Element-> " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    v.pop_back();

    cout << "\nAfter pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\nBefore clear size-> " << v.size() << endl;
    v.clear();
    cout << "After clear size-> " << v.size() << endl;

    // intializing the whole vector array with some value
    vector<int> a(5, -1);
    cout << "Printing vector a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    // copying the vector array into another array
    vector<int> last(a);
    cout << "\nPrinting copied vector last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    return 0;
}