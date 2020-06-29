#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<int> a = {1, 1, 2, 2, 3, 4, 5, 5};
    vector<int> b = {1, 1, 2, 5};

    set_difference(a.begin(), a.end(), b.begin(), b.end(), a.begin());
    a.resize(a.size() - b.size());

    for (auto value : a)
        cout << value << " ";
    cout << endl;

    for (auto value : b)
        cout << value << " ";
    cout << endl;
}
