#include <bits/stdc++.h>
using namespace std;

void input(vector<int>& rvnSeq)
{
  int nSeqSiz;
  cin >> nSeqSiz;
  rvnSeq.resize(nSeqSiz);

  for (int& rnSeq : rvnSeq)
    cin >> rnSeq;
}
  
void calcSeqMaxNum(const vector<int>& cnrvnSeq)
{
  vector<int> vnSrtSeq(cnrvnSeq);
  sort(begin(vnSrtSeq), end(vnSrtSeq));

  for (int i = 0; i < cnrvnSeq.size(); i++)
  {
    int nMax = vnSrtSeq[vnSrtSeq.size() - 1];
    if (cnrvnSeq[i] == vnSrtSeq[vnSrtSeq.size() - 1])
      nMax = vnSrtSeq[vnSrtSeq.size() - 2];

    cout << nMax << endl;
  }
}
  
int main()
{
  vector<int> vnSeq;

  input(vnSeq);
  calcSeqMaxNum(vnSeq);

  return 0;
}