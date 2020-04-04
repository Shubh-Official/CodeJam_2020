#include <bits/stdc++.h>
using namespace std;

int square[50][50], n, k, i;
bool rowSafe[50][50], columnSafe[50][50], flag;

void evaluate(int row, int column, int m)
{
    if (row == n && column == (n+1) && m == k && !flag)
    {
        flag = true;
        cout << "Case #" << (i+1) << ": " << "POSSIBLE\n";
        for (int j=1;j<=n;j++)
        {
            for (int z=1;z<=n;z++)
            {
                cout << square[j][z] << " ";
            }
            cout << endl;
        }
        return;
    }
    else if (row > n)
        return;
    else if (column > n)
        evaluate(row + 1, 1, m);
    for (int j = 1; j <= n && !flag; j++)
    {
        if (!rowSafe[row][j] && !columnSafe[column][j])
        {
            rowSafe[row][j] = true;
            columnSafe[column][j] = true;
            if (row == column)
                m += j;

            square[row][column] = j;
            evaluate(row, column + 1, m);

            rowSafe[row][j] = false;
            columnSafe[column][j] = false;
            if (row == column)
                m -= j;
            square[row][column] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        evaluate(1, 1, 0);
        if (!flag)
            cout << "Case #" << (i+1) << ": " << "IMPOSSIBLE" << endl;
        flag = false;
    }
    return 0;
}