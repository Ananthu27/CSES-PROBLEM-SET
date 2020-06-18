#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string input;
    cin >> input;
    vector<char> v(begin(input), end(input));
    int mcount = 0, ccount = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] == v[i])
            ccount++;
        else
        {
            if (mcount < ccount)
                mcount = ccount;
            ccount = 1;
        }
    }
    if (mcount < ccount)
        mcount = ccount;
    cout << mcount << endl;
    return 0;
}