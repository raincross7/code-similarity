//Author: master19
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define ff first 
#define ss second 
#define pb push_back
#define endl "\n"
#define mod 1000000007LL // fixed...
#define modd 1000000007LL // Can be changed for global use
#define all(arr) arr.begin(),arr.end()
#define x(arr) arr.begin(),arr.end()
#define ulli unsigned long long int
#define assign(x,val) memset(x,val,sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define Sort(arr) sort(arr.begin(), arr.end())
#define time() std::chrono::high_resolution_clock::now();
#define lower(str) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
#define crap ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define get(arr, num) vector < ll > arr(num); for(int i=0; i<num; i++)cin >> arr[i];
#define get_set(arr, num, st, type) set < type > st; for(int i=0; i<num; i++) st.insert(arr[i]);
#define put(arr, num) for(int i=0; i<num; i++)cout << arr[i] << " "; cout << endl;
#define Time(start, finish) std::chrono::duration<double> elapsed = finish - start; cout << elapsed.count() << endl;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > new_ds; 
void debug_out() { cerr << endl; }
template <typename HeadStart, typename... TailEnd>
void debug_out(HeadStart H, TailEnd... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
ll lets_do_it();
pair < ll, ll > xy[] = {{-1, 0}, {1, 0} , {0, -1}, {0, 1}};
pair < ll, ll > dig[] = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}};
bool isValid(ll x, ll y, ll row, ll col){
    return ((x>=0) && (y >=0)  && (x < row) && (y < col));
}
int main(int argc, const char** argv) {
    crap;
    ll test = 1;
    // cin >> test;
    for(int loop=0; loop<test; loop++){
        // cout << "Case #" << (loop+1) << ": "; 
        lets_do_it();
    }
    return 0;
}
ll lets_do_it(){
    // Your code goes by here !!
    ll num;
    cin >> num;
    ll count = 0;
    for(int i=1; i<=num; i++){
        ll value = num/i;
        if(value * i == num)
            value--;
        count += value;
    }
    cout << count << endl;




    return 0;
}
