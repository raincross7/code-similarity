#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int , int> P2;
typedef pair<pair<int , int> , int> P3;
typedef pair<pair<int , int> , pair<int , int> > P4;
#define PB(a) push_back(a)
#define MP(a , b) make_pair((a) , (b))
#define M3P(a , b , c) make_pair(make_pair((a) , (b)) , (c))
#define M4P(a , b , c , d) make_pair(make_pair((a) , (b)) , make_pair((c) , (d)))
#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

LL K;

int main(){
	scanf("%lld" , &K);
	int N = 50;
	LL q = K / N;
	LL r = K % N;
	printf("%d\n" , N);
	repp(i,0,N){
		printf("%lld%c" , N - 1 + q - r + (i<r?N+1:0) , i+1==N?'\n':' ');
	}
	return 0;
}
