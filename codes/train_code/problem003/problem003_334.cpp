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
#define PI acos(-1.0)
#define mod 1000000007LL // fixed...
#define modd 1000000007LL // Can be changed for global use
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define all(arr) arr.begin(),arr.end()
#define x(arr) arr.begin(),arr.end()
#define ulli unsigned long long int
#define assign(x,val) memset(x,val,sizeof(x))
#define prec(val, dig) fixed << setprecision(dig) << val
#define Sort(arr) sort(arr.begin(), arr.end())
#define lower(str) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define upper(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
#define crap ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define get(arr, num) vector < ll > arr(num); for(int i=0; i<num; i++)cin >> arr[i];
#define get_set(arr, num, st, type) set < type > st; for(int i=0; i<num; i++) st.insert(arr[i]);
#define put(arr, num) for(int i=0; i<num; i++)cout << arr[i] << " "; cout << endl;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > new_ds; 
ll lets_do_it();
// pi xy[] = {{-1, 0}, {1, 0} , {0, -1}, {0, 1}};
// pi dig[] = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}};
// bool isValid(ll x, ll y, ll row, ll col){
//     return ((x>=0) && (y >=0)  && (x < row) && (y < col));
// }
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
    if(num <= 599)
        cout << "8\n";
    else if(num <= 799) 
        cout <<"7\n";
    else if(num <= 999)
        cout << "6\n";
    else if(num <= 1199)
        cout <<"5\n";
    else if(num <= 1399)
        cout << "4\n";
    else if(num <= 1599)
        cout << "3\n";
    else if(num <= 1799)
        cout << "2\n";
    else 
        cout << "1\n";











    return 0;
}
