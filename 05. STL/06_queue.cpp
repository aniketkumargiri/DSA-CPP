#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<string> q;

    q.push("aniket");
    q.push("kumar");
    q.push("giri");

    cout << "First Element-> " << q.front() << endl;
    q.pop();
    cout << "First Element-> " << q.front() << endl;

    cout << "Size of queue-> " << q.size() << endl;

    cout << "Empty or not-> " << q.empty() << endl;

    return 0;
}