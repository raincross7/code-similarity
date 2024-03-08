#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x); 
int gcd(int a, int b); 
vector<int> primeFactorization(int x); 
void printVector(vector<long> list, string str); 
void setPrecision(int n);

int main() {
  int n, a ,b;
  cin >> n >> a >> b;
  int space = b-a;
  if (space %2 == 0) {
    cout << "Alice" << endl;
  } else {
    cout << "Borys" << endl;
  }

}

int gcd(int a, int b) {
  if (a%b == 0) {
    return b;
  } else return gcd(b, a%b);
}

bool isPrime(int x) {
  if (x < 2) return false;
  if (x == 2) return true;
  if (x % 2 == 0) return false;

  double num = sqrt(x);
  for (int i = 3; i <= num; i+=2) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

// 素因数分解
// example: primeFactorization(12) = vector<int>{2, 2, 3}
vector<int> primeFactorization(int x) {
  vector<int> ans;
  int i = 2;
  while (i*i <= x) {
    if (x % i == 0) {
      ans.push_back(i);
      x /= i;
    } else {
      i++;
    }
  }
  ans.push_back(x);
  return ans;
}

void printVector(vector<long> list, string str) {
  for (int i = 0; i < list.size(); i++) {
    cout << str << ": " << list[i] << endl;
  }
}

void setPrecision(int n) {
  cout << fixed << setprecision(n);
}