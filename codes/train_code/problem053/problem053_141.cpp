#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
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
vector<int> sort(vector<int> vec) {
    sort(vec.begin(), vec.end());
    return vec;
}
vector<int> resort(vector<int> vec) {
    sort(vec);
    reverse(vec.begin(), vec.end());
    return vec;
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
int gcd(int a, int b){
    if (a % b == 0){
      return(b);
    }else{
      return(gcd(b, a % b));
    }
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int main() {
  string s;
    cin >> s;
    bool flag = true;
    if (s[0] != 'A') {
        flag = false;
    }
    string t = s.substr(2, s.size() - 3);
    sort(t.begin(),t.end());
    if (t[0] != 'C') {
        flag = false;
    }
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            cnt++;
        }
    }
    if (cnt != s.size() - 2) {
        flag = false;
    }
    if (flag) {
        cout << "AC" << endl;
    }
    else {
        cout << "WA" << endl;
    }
}