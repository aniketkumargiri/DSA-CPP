#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<string> s;

    s.push("aniket");
    s.push("kumar");
    s.push("giri");

    cout << "Top Element-> " << s.top() << endl;
    s.pop();
    cout << "Top Element-> " << s.top() << endl;

    cout << "Size of stack-> " << s.size() << endl;

    cout << "Empty or not-> " << s.empty() << endl;

    return 0;
}