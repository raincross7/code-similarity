#include <bits/stdc++.h>
using namespace std;

class Debug {
private:
    static int NAME_LENGTH, MAX_WIDTH;
    static bool IS_MATRIX;
public:
    static void set_NAME_LENGTH(int l) { NAME_LENGTH = l; }
    static int get_NAME_LENGTH() { return NAME_LENGTH; }
    static void set_MAX_WIDTH(int w) { MAX_WIDTH = w; }
    static int get_MAX_WIDTH() { return MAX_WIDTH; }
    static void set_IS_MATRIX(bool f) { IS_MATRIX = f; }
    static bool get_IS_MATRIX() { return IS_MATRIX; }
};

int Debug::NAME_LENGTH = 0;
int Debug::MAX_WIDTH = 0;
bool Debug::IS_MATRIX = false;

// Debug for vector
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    bool flg = true;
    for (auto e : v) {
        os << (flg ? "" : ", ");
        if (Debug::get_IS_MATRIX()) {
            os << right << setw(Debug::get_MAX_WIDTH());
        }
        os << e;
        flg = false;
    }
    os << "]";
    return os;
}

template <typename T>
ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
    Debug::set_IS_MATRIX(true);
    int width = 0;
    for (unsigned int i = 0; i < v.size(); ++i) {
        for (unsigned int j = 0; j < v[i].size(); ++j) {
            width = max(width, (int)to_string(v[i][j]).size());
        }
    }
    Debug::set_MAX_WIDTH(width);
    string space = "";
    for (int i = 0; i < Debug::get_NAME_LENGTH() + 7; ++i) space += " ";
    os << "[";
    bool flg = true;
    for (auto e : v) {
        os << (flg ? "" : "\n" + space);
        os << e;
        flg = false;
    }
    os << "]";
    Debug::set_IS_MATRIX(false);
    return os;
}

// Debug for pair
template <typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

// Debug for set
template <typename T>
ostream& operator<<(ostream& os, const set<T>& s) {
    os << "{";
    bool flg = true;
    for (auto e : s) {
        os << (flg ? "" : ", ");
        os << e;
        flg = false;
    }
    os << "}";
    return os;
}

// Debug for map
template <typename T, typename U>
ostream& operator<<(ostream& os, const map<T, U>& mp) {
    os << "{";
    bool flg = true;
    for (auto e : mp) {
        os << (flg ? "" : ", ");
        os << e.first << ": " << e.second;
        flg = false;
    }
    os << "}";
    return os;
}

// Debug assistant
#define DUMP(...) INTERNAL_DUMP(#__VA_ARGS__, __VA_ARGS__)

string REMOVE_SPACE(string s) {
    while (s[0] == ' ') {
        s = s.substr(1);
    }
    while (s[s.size() - 1] == ' ') {
        s = s.substr(0, s.size() - 1);
    }
    return s;
}

pair<string, string> GET_NAME(string s) {
    int bracket = 0, idx = 0;
    while ((unsigned)idx < s.size() && !(s[idx] == ',' && bracket == 0)) {
        if (s[idx] == '(') ++bracket;
        else if (s[idx] == ')') --bracket;
        ++idx;
    }
    string other_names;
    if ((unsigned)idx == s.size()) {
        other_names = "";
    } else {
        other_names = s.substr(idx + 1);
    }
    string first_name = s.substr(0, idx);
    first_name = REMOVE_SPACE(first_name);
    other_names = REMOVE_SPACE(other_names);
    return pair<string, string>(first_name, other_names);
}

// Debug main
void INTERNAL_DUMP(string name) {
    return;
}

template <class Head, class... Tail>
void INTERNAL_DUMP(string name, Head&& head, Tail&&... tail) {
    pair<string, string> p = GET_NAME(name);
    Debug::set_NAME_LENGTH(p.first.size());
    cerr << ">> " << p.first << " = " << head << endl;
	INTERNAL_DUMP(p.second, move(tail)...);
}

// End of Debug parts
//------------------------------------------------------------------------------


typedef pair<int, long long> P;

int main() {
    long long N, D, A;  cin >> N >> D >> A;
    vector<P> monster;
    for (int i = 0; i < N; ++i) {
        int x, h;  cin >> x >> h;
        monster.push_back(P(x, h));
    }
    sort(monster.begin(), monster.end());

    vector<long long> cnt(N);  // i 番目で爆発させる回数
    int left = 0;
    long long cnt_sum = 0;
    for (int i = 0; i < N; ++i) {
        while (true) {
            if (monster[left].first + 2 * D < monster[i].first) {
                cnt_sum -= cnt[left];
                ++left;
            }
            else break;
        }
        // DUMP(cnt_sum);
        cnt[i] = max(0, (int)(ceil((1.0 * monster[i].second - cnt_sum * A) / A)));
        cnt_sum += cnt[i];
    }

    // DUMP(cnt);
    long long ans = 0;
    for (int i = 0; i < N; ++i) ans += cnt[i];
    cout << ans << endl;
}
