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
	ll N,A,B;
	cin>>N>>A>>B;
	if((N==1&&A!=B)||(A>B)){
		cout<<"0"<<endl;
	}
	else{
		cout<<B*(N-2)-A*(N-2)+1<<endl;
	}
}