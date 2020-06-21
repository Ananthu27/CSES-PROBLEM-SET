#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define ll long long
int main()
{
    multiset<int> a = {3, 5, 5, 7, 7};
    cout << *a.lower_bound(1) << endl;
    cout << *a.lower_bound(2) << endl;
    cout << *a.lower_bound(3) << endl;
    cout << *a.lower_bound(4) << endl;
    cout << *a.lower_bound(5) << endl;
    cout << *a.lower_bound(6) << endl;
    cout << *a.lower_bound(7) << endl;
    cout << *--a.lower_bound(8) << endl;
    cout << *--a.lower_bound(9) << endl;
    cout << *--a.lower_bound(10) << endl;
}