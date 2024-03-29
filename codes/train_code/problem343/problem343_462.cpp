#include <iostream>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)

int main(void)
{
  int N;
  cin >> N;

  int in[3];
  REP(i, N) {
    REP(j,3) cin >> in[j];
    sort(in, in+3);
    if (in[2]*in[2]==in[0]*in[0]+in[1]*in[1]) cout << "YES";
    else                                cout << "NO";
    cout << endl;
  }

  return 0;
}