//
// Created by kashi on 27-07-2020.
//
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ll long long
#define ff first
#define ss second
#define Endl endl
#define int long long
int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
bool cmps(pair<int,int>p1,pair<int,int>p2) {
    return p1.ss<p2.ss;
}

int32_t  main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<Endl;
    return 0;
}