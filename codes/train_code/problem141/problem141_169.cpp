#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstdio>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;

void merge (int *first1, int *last1, int *first2, int *last2){
    int size1 = last1 - first1;
    int size2 = last2 - first2;
    int *result = new int[size1+size2];
    int i = 0;
    int j = 0;
    int index = 0;
    while (true){
        if (i < size1 && (first1[i] <= first2[j] || j >= size2)){
            result[index] = first1[i];
            ++i; ++index;
        }
        if (j < size2 && (first1[i] > first2[j] || i >= size1)){
            result[index] = first2[j];
            ++j; ++index;
        }
        if (i==size1 && j==size2){
            for (i=0; i<size1; ++i) first1[i] = result[i];
            for (j=0; j<size2; ++j) first2[j] = result[j+size1];
            delete[] result;
            return;
        }
    }
}
void MergeSort (int *first, int *last){
    int size = last - first;
    if(size <= 1) return;
    MergeSort(first, first+size/2);
    MergeSort(first+size/2, last);
    merge(first, first+size/2, first+size/2, last);
}


int gcd(int a, int b)
{
    int c;

    if (a < b) {
        a+=b; b=a-b; a-=b;
    }

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s="qwertasdfgzxcvb", m="yuiophjklnm",moji;

    while(1){
      cin >> moji;
      if(moji=="#") break;

      int a[moji.size()];
      int cnt = 0;
      int flag;
      REP(j, moji.size()){
        REP(i, 11){
          if(m[i] == moji[j]){
            flag = 1;
            break;
          }else flag = 0;
      }
      a[j] = flag;
      if(j != 0 && a[j-1] != a[j]) cnt++;
    }

      cout << cnt << endl;
    }
}