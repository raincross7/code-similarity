#include<bits/stdc++.h>
using namespace std;
 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s1,s2,s3;cin>>s1>>s2>>s3;
    transform(s1.begin(), s1.end(),s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(),s2.begin(), ::toupper);
    transform(s3.begin(), s3.end(),s3.begin(), ::toupper);
  
    cout<<s1[0]<<s2[0]<<s3[0]<<endl;
	return 0;
}