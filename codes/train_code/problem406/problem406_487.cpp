#include <bits/stdc++.h>
using namespace std;
using lint = long long;
const lint mod = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define bitcount(n) __builtin_popcountl((lint)(n))
#define fcout cout << fixed << setprecision(15)
#define highest(x) (63 - __builtin_clzl(x))
template<class T> inline void YES(T condition){ if(condition) cout << "YES" << endl; else cout << "NO" << endl; }
template<class T> inline void Yes(T condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }
template<class T = string, class U = char>int character_count(T text, U character){ int ans = 0; for(U i: text){ ans += (i == character); } return ans; }
lint power(lint base, lint exponent, lint module){ if(exponent % 2){ return power(base, exponent - 1, module) * base % module; }else if(exponent){ lint root_ans = power(base, exponent / 2, module); return root_ans * root_ans % module; }else{ return 1; }}
struct position{ int y, x; }; position mv[4] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}}; // double euclidean(position first, position second){ return sqrt((second.x - first.x) * (second.x - first.x) + (second.y - first.y) * (second.y - first.y)); }
template<class T, class U> string to_string(pair<T, U> x){ return to_string(x.first) + "," + to_string(x.second); } string to_string(string x){ return x; }
template<class itr> void array_output(itr start, itr goal){ string ans; for(auto i = start; i != goal; i++) ans += to_string(*i) + " "; if(!ans.empty()) ans.pop_back(); cout << ans << endl; }
template<class itr> void cins(itr first, itr last){ for(auto i = first; i != last; i++){ cin >> (*i); } }
template<class T> T gcd(T a, T b){ if(a && b){ return gcd(min(a, b), max(a, b) % min(a, b)); }else{ return a; }} template<class T> T lcm(T a, T b){ return a / gcd(a, b) * b; }
struct combination{ vector<lint> fact, inv; combination(int sz) : fact(sz + 1), inv(sz + 1){ fact[0] = 1; for(int i = 1; i <= sz; i++){ fact[i] = fact[i - 1] * i % mod; } inv[sz] = power(fact[sz], mod - 2, mod); for(int i = sz - 1; i >= 0; i--){ inv[i] = inv[i + 1] * (i + 1) % mod; } } lint C(int p, int q) const{ if(q < 0 || p < q) return 0; return (fact[p] * inv[q] % mod * inv[p - q] % mod); } };
template<class itr> bool next_sequence(itr first, itr last, int max_bound){ itr now = last; while(now != first){ now--; (*now)++; if((*now) == max_bound){ (*now) = 0; }else{ return true; } } return false; }

#define int lint

lint maxSubarrayXOR(lint set[], int n)
{
    // Initialize index of
    // chosen elements
    int index = 0;
    
    // Traverse through all
    // bits of integer
    // starting from the most
    // significant bit (MSB)
    for (int i = 60; i >= 0; i--)
    {
        // Initialize index of
        // maximum element and
        // the maximum element
        int maxInd = index;
        lint maxEle = LONG_LONG_MIN;
        for (int j = index; j < n; j++)
        {
            // If i'th bit of set[j]
            // is set and set[j] is
            // greater than max so far.
            if ( (set[j] & (1ll << i)) != 0
                && set[j] > maxEle )
                maxEle = set[j], maxInd = j;
        }
        
        // If there was no
        // element with i'th
        // bit set, move to
        // smaller i
        if (maxEle == LONG_LONG_MIN)
            continue;
        
        // Put maximum element
        // with i'th bit set
        // at index 'index'
        swap(set[index], set[maxInd]);
        
        // Update maxInd and
        // increment index
        maxInd = index;
        
        // Do XOR of set[maxIndex]
        // with all numbers having
        // i'th bit as set.
        for (int j=0; j<n; j++)
        {
            // XOR set[maxInd] those
            // numbers which have the
            // i'th bit set
            if (j != maxInd &&
                (set[j] & (1ll << i)) != 0)
                set[j] = set[j] ^ set[maxInd];
        }
        
        // Increment index of
        // chosen elements
        index++;
    }
    
    // Final result is
    // XOR of all elements
    lint res = 0;
    for (int i = 0; i < n; i++)
        res ^= set[i];
    return res; 
} 

signed main(){
    int N;
    cin >> N;
    lint A[N];
    cins(A, A + N);
    lint all = 0;
    for(int i = 0; i < N; i++){
        all ^= A[i];
    }
    lint ans = 0;
    //int c = 0;
    for(int i = 63; i >= 0; i--){
        if((all >> i) & 1){
            ans += (1ll << i);
            for(int j = 0; j < N; j++){
                A[j] &= ~(1ll << i);
            }
            //continue;
        }/*
        int index = 0;
        lint num = -1;
        for(int j = c; j < N; j++){
            if((A[j] >> i) & 1){
                num = A[j];
                index = j;
                break;
            }
        }
        if(num == -1){
            continue;
        }
        if(c != index){
            swap(A[c], A[index]);
        }
        for(int j = 0; j < N; j++){
            if(j != c && (A[j] >> i) & 1){
                A[j] ^= num;
                break;
            }
        }
        c++;*/
    }/*
    all = 0;
    for(int i = 0; i < N; i++){
        all ^= A[i];
    }*/
    cout << ans + maxSubarrayXOR(A, N) * 2 << endl;
}