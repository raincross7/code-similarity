#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <istream>
#include <sstream>
#include <cctype>
#include <iomanip>
//cout << fixed << setprecision(20) << *** << endl;
#define rep(i,N) for(int i=0;i<(int)N;++i)
typedef long long ll;
using namespace std;
int main()
{
	ll N,H,W,ANS=0;
	cin>>N>>H>>W;
	rep(i,N){
		ll h,w;
		cin>>h>>w;
		if(h>=H&&w>=W)ANS++;
	}
	cout<<ANS<<endl;
}