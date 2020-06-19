#include <iostream>
#include <vector>
using namespace std;
#define ul long long
int main()
{
    string n;
    cin >> n;
    vector<pair<char, ul>> v;
    for (auto c : n)
    {
        ul i;
        for (i = 0; (unsigned)i < v.size(); i++)
            if (v[i].first == c)
            {
                v[i].second++;
                break;
            }
        if ((unsigned)i == v.size())
            v.push_back(make_pair(c, 1));
    }
    bool a = true;
    ul c = 0;
    for (auto p : v)
        if ((p.second) % 2)
        {
            if (c == 0)
                c++;
            else
                a = false;
        }
    if (!a)
        cout << "NO SOLUTION" << endl;
    else
    {
        vector<char> ans;
        for (ul i = 0; (unsigned)i < v.size(); i++)
        {
            if (!(v[i].second % 2))
                for (ul j = 0; j < (v[i].second / 2); j++)
                    ans.push_back(v[i].first);
        }

        for (ul i = 0; (unsigned)i < ans.size(); i++)
            cout << ans[i];

        for (ul i = 0; (unsigned)i < v.size(); i++)
            if (v[i].second % 2)
                for (ul j = 0; j < v[i].second; j++)
                    cout << v[i].first;

        for (ul i = ans.size() - 1; i >= 0; i--)
            cout << ans[i];
        cout << endl;
    }
}