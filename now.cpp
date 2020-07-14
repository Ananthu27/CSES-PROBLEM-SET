#include <bits/stdc++.h>
using namespace std;
#define ll long long

// 5
// 3 7 9 2 7
// 9 8 3 5 5
// 1 7 9 8 5
// 3 8 6 4 10
// 6 3 9 7 8

int n, mod = 1e9 + 7, input;
const int size = 1001;
int matrix[size][size];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    matrix[0][1] += matrix[0][0];
    matrix[1][0] += matrix[0][0];

    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            matrix[i][j] += max(matrix[i - 1][j], matrix[i][j - 1]);
    cout << matrix[n - 1][n - 1] << endl;
}