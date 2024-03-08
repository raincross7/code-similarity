#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int ctoi(const char c) {
    if ('0' <= c && c <= '9') return (c - '0');
    return -1;
}
vector<int> input(int n) {
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }
    return vec;
}
void output(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return;
}
vector<vector<int>> input(int n, int m) {
    vector<vector<int>> table(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> table. at(i).at(j);
        }
    }
    return table;
}
void output(vector<vector<int>> table) {
    for (int i = 0; i < table.size(); i++) {
        for (int j = 0; j < table.at(0).size(); j++) {
            cout << table.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
long long perm(int n, int r) {
    if (n < r) {
        cout << "error" << endl;
        return 0;
    }
    long long perm = 1;
    for (int i = n; i > n - r; i--) {
        perm *= i;
    }
    return perm;
}
long long comb(int n, int r) {
    if (n < r) {
        cout << "error" << endl;
        return 0;
    }
    long long comb = perm(n,r);
    for (int i = r; i > 0; i--) {
        comb /= i;
    }
    return comb;
}
long long homo(int n, int r) {
    return comb(n + r - 1, n - 1);
}
long long fact(int n) {
    long long fact = 1;
    for (int i = n; i > 0; i--) {
        fact *= i;
    }
    return fact;
}
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return(b);
    }
    else
    {
        return(gcd(b, a % b));
    }
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int main() {
  string o,e;
  cin >> o >> e;
  rep(i,e.size()){
    cout << o[i] << e[i];
  }
  if(o.size()-e.size()==1){
    cout << o[o.size()-1] << endl;
  }
}
