#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i=0; i<N; i++)
    {
        cin >> A.at(i);
    } 
    int count=0;
    for(int i=0; i<N; i++)
    {
        if(A.at(i)>=M)
        {
        count++;
        }
    }
    cout << count <<endl;
}
