#include <bits/stdc++.h>

#define llint long long int

using namespace std;

int main()
{
    int N, D;

    cin >> N >> D;

    vector<vector<int>> X(N, vector<int>(D));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cin >> X[i][j];
        }
    }
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int dist = 0;

            for (int k = 0; k < D; k++)
            {
                dist += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }
            for (int k = 0; k * k <= dist; k++)
            {
                if (k * k == dist)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}