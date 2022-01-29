#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // max - heap
    priority_queue<int> maxi;

    // min - heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size-> " << maxi.size() << endl;
    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout << "\nSize-> " << mini.size() << endl;
    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << "\nEmpty or not-> " << mini.empty() << endl;

    return 0;
}