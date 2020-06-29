#include <bits/stdc++.h>

using namespace std;

// #define DEBUG 1

#ifdef DEBUG
#define log(x) cout << (x) << endl
#define logspace(x) cout << (x) << " "
#else
#define log(x)
#define logspace(x)
#endif

int arraySplitting(vector<int> arr)
{
    int ans = 0, sum = 0;

    for (auto value : arr)
        sum += value;

    // log(" ");
    // logspace("size");
    // log(arr.size());

    if (arr.size() == 0 || arr.size() == 1 || sum == 0 || sum % 2)
        ans = 0;

    else
    {
        sort(arr.begin(), arr.end(), greater<int>()); // continue here
        sum /= 2;

        log(" ");
        logspace("sum");
        log(sum);

        vector<int> newarr;
        int partialsum = 0;

        for (int i = 0; i < arr.size(); i++)
            if (partialsum + arr[i] <= sum)
            {
                newarr.push_back(arr[i]);
                partialsum += arr[i];
            }
        set_difference(arr.begin(), arr.end(), newarr.begin(), newarr.end(), arr.begin());
        arr.resize(arr.size() - newarr.size());

        int arrsum = accumulate(arr.begin(), arr.end(), 0);
        int newarrsum = accumulate(newarr.begin(), newarr.end(), 0);
        if (arrsum == newarrsum)
        {
            ans = 1;
            ans = ans + max(arraySplitting(arr), arraySplitting(newarr));
        }

        for (auto value : arr)
            logspace(value);
        log(" ");
        for (auto value : newarr)
            logspace(value);
        log(" ");
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // main code START

    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << arraySplitting(v) << endl;

    // main code END

    return 0;
}