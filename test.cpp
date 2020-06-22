#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define ll long long
int main()
{
    multiset<ll> a = {3, 4, 5, 6};
    cout << *a.upper_bound(3) << endl;
    cout << *a.lower_bound(3) << endl;
}
