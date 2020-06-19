#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string n, s;
    cin >> n;
    sort(begin(n), end(n));
    s = n;
    int count = 0;
    do
    {
        count++;
    } while (next_permutation(begin(n), end(n)));
    cout << count << endl;
    do
    {
        cout << s << endl;
    } while (next_permutation(begin(s), end(s)));
}