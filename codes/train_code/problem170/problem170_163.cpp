 
/***************************************** 
****       Solution by SlavicG        ****
*****************************************/
 
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm> 
#include <set>
#include <utility>
#include <queue>
#include <map>
#include <assert.h>
#include <stack>
using namespace std;
#define ll long long
#define forn(i,n) for(int i=0;i<n;++i)
#define MX 10000000001
#define pow2(a) ((a)*(a))
#define pb push_back
#define vair <vector<pair<int,int>>
#define vi vector<int>
#define mp make_pair
#define pf push_front
#define all(v) v.begin(), v.end()
#define endl "\n"
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int longestIncreasingSubsequenceLenghtDP(int a[],int n){
    int dp[n],ans=0;
    for(int k = 0;k<n;k++){
        dp[k] = 1;
        for(int i = 0;i<k;i++){
            if(a[i] <= a[k]){
                dp[k] = max(dp[k],dp[i] + 1);
                ans = max(dp[k],ans);
            }
        }
    }
    return ans;
 }
int result[1000] = {0};
int factDP(int n) 
{
   if (n >= 0) {
      result[0] = 1;
      for (int i = 1; i <= n; ++i) {
         result[i] = i * result[i - 1];
      }
      return result[n];
   }
}
bool checkPrime(int n)
{
    if(n<2) return false;
    for(int x = 2;x*x <=n;x++)
    {
        if(n%x == 0)return false;
    }
    return true;
}
vector<int> primeFactors(int n){
    vector<int> f;
    for(int x = 2;x*x<=n;x++){
        while(n%x==0){
            f.push_back(x);
            n/=x;
        }
    }
    if(n>1)f.push_back(n);
    return f;
}
int binary_Search_Classic(int n, int arr[],int target){
	int l,r,mid;
	l=0;
	r=n-1;
	while(l<=r){
		mid= l+(r-l)/2;
		if(arr[mid] == target){
			return mid;
		}
		if(arr[mid] < target){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return -1;
	
}
vector<int> Two_PointerSumOfTwo(vector<int> arr, int target)
{
	int l = 0, r = arr.size()-1;
	vector<int> ans;
	while(l<r){
		if(arr[l] + arr[r] == target)
		{
			ans.push_back(l);
			ans.push_back(r);
			break;
		}else if(arr[l] + arr[r] > target){
			r--;
		}else{
			l++;;
		}
	}
	return ans;
}
int countDistinctCharsString(string s) {
    unordered_map<char, int> m; 
    for (int i = 0; i <(int)s.length(); i++) { 
        m[s[i]]++; 
    }
    return m.size(); 
} 
int main()
{
	int h,n;
	cin >> h >> n;
	int a;
	int s=0;
	forn(i,n)
	{
		cin >> a;
		s += a;
	}
	if(s>= h)
	{
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}