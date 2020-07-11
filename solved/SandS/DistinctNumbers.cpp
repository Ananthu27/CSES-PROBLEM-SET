#include <iostream>
#include <set>
using namespace std;
#define ul long long
int main()
{
    ul n, input;
    cin >> n;
    set<ul> v;
    for (ul i = 0; i < n; i++)
    {
        cin >> input;
        v.insert(input);
    }
    cout << v.size() << endl;
}
