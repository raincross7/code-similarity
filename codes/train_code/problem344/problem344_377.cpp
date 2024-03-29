#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::vector<long long> P)
{
  vector<pair<int, int>> vs;
  for (int i = 0; i < P.size(); i++)
    vs.push_back(make_pair(P[i], i));
  sort(vs.begin(), vs.end());
  set<int> idx;
  idx.insert(-2);
  idx.insert(-1);
  idx.insert(P.size());
  idx.insert(P.size() + 1);
  long long ans = 0;
  for (int i = P.size() - 1; i >= 0; i--)
  {
    if (i == P.size() - 1)
    {
      idx.insert(vs[i].second);
      continue;
    }
    int cur = vs[i].second;
    //cout << cur << endl;
    idx.insert(cur);
    auto it = idx.find(cur);
    auto right = idx.find(cur);
    auto left = idx.find(cur);
    right++, left--;

    long long right_range = *right;
    long long left_range = *left;
    right++, left--;
    long long hoge = abs(right_range - *right);
    long long fuga = abs(left_range - *left);
    if(*right!=P.size()+1)
    ans += hoge * abs(left_range - *it) * vs[i].first;
    if(*left!=-2)
    ans += fuga * abs(right_range - *it) * vs[i].first;
    //cout << *left << " " << left_range << " " << *it << " " << right_range << " " << *right << endl;
  }
  cout << ans << endl;
}

// Generated by 1.1.5 https://github.com/kyuridenamida/atcoder-tools  (tips: You
// use the default template now. You can remove this line by using your custom
// template)
int main()
{
  long long N;
  scanf("%lld", &N);
  std::vector<long long> P(N);
  for (int i = 0; i < N; i++)
  {
    scanf("%lld", &P[i]);
  }
  solve(N, std::move(P));
  return 0;
}
