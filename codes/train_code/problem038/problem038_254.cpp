#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define INF (int)1e9
typedef long long int int64;

void print() {
    cout << endl;
}

void print(const char* s, bool endline = true) {
    cout << s;
    if (endline) print();
}

void print(char s, bool endline = true) {
    cout << s;
    if (endline) print();
}

void print(string s, bool endline = true) {
    cout << s;
    if (endline) print();
}

void print(int64 s, bool endline = true) {
    cout << s;
    if (endline) print();
}

void print(int s, bool endline = true) {
    cout << s;
    if (endline) print();
}

template <typename T, typename T2>
void print(pair<T, T2>& p, bool endline = true) {
    cout << "(";
    print(p.first, false);
    cout << ", ";
    print(p.second, false);
    cout << ")";

    if (endline) print();
}

template <typename T>
void print(T& t, bool endline = true) {
    cout << "[";
    for (auto it = t.begin(); it != t.end(); ++it) {
        if (it != t.begin()) cout << ", ";
        print(*it, false);
    }
    cout << "]";

    if(endline) print();
}

template <typename T>
vector<T> operator+(const vector<T> &a, const vector<T> &b)
{
    vector<T> ret;
    ret.reserve( a.size() + b.size() );                // preallocate memory
    ret.insert( ret.end(), a.begin(), a.end() );        // add A;
    ret.insert( ret.end(), b.begin(), b.end() );        // add B;

    return ret;
}

template <typename T>
vector<T> &operator+=(vector<T> &a, const vector<T> &b)
{
    a.reserve( a.size() + b.size() );                // preallocate memory without erase original data
    a.insert( a.end(), b.begin(), b.end() );         // add B;
    return a;
}

bool c(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.first + a.second > b.first + b.second); 
}

int main() {
    // g++ -Wall -Wextra -O2 -std=c++17 helloworld.cpp  
    
    string s;
    cin >> s;

    map<char, int64> m;

    for(auto& c : s) {
        m[c]++;
    }

    int64 count = 1LL;

    for(char c = 'a'; c <= 'z'; c++) {
        for(char c2 = c + 1; c2 <= 'z'; c2++) {
            count += m[c] * m[c2];
        }
    }

    cout << count << endl;

    return 0;
}