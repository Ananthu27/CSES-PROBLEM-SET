#include <iostream>
#include <vector>
#define ul unsigned long long
using namespace std;
int main()
{
    ul n;
    cin >> n;
    vector<vector<ul>> yx = vector<vector<ul>>(n, vector<ul>(2, 0));
    for (ul i = 0; i < n; i++)
        cin >> yx[i][0] >> yx[i][1];
    for (ul i = 0; i < yx.size(); i++)
    {
        if ((yx[i][0] % 2 && yx[i][1] % 2 && yx[i][1] >= yx[i][0]) || (!(yx[i][0] % 2) && yx[i][1] % 2 && yx[i][0] < yx[i][1]))
            cout << (yx[i][1] * yx[i][1]) - yx[i][0] + 1;
        else if ((yx[i][0] % 2 && yx[i][1] % 2 && yx[i][1] < yx[i][0]) || (yx[i][0] % 2 && !(yx[i][1] % 2) && yx[i][1] < yx[i][0]))
            cout << ((yx[i][0] - 1) * (yx[i][0] - 1)) + yx[i][1];
        else if ((!(yx[i][0] % 2) && yx[i][1] % 2 && yx[i][0] >= yx[i][1]) || (yx[i][0] >= yx[i][1] && !(yx[i][0] % 2) && !(yx[i][1] % 2)))
            cout << yx[i][0] * yx[i][0] - yx[i][1] + 1;
        else
            cout << ((yx[i][1] - 1) * (yx[i][1] - 1)) + yx[i][0];
        cout << endl;
    }
    return 0;
}
